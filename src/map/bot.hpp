#include "dpp/dpp.h"

const std::string BOT_TOKEN = "";

void do_init_discord(){
    dpp::cluster bot(BOT_TOKEN, dpp::i_all_intents);
    bot.on_log(dpp::utility::cout_logger());
    bot.on_ready([&](const dpp::ready_t& event){
        bot.set_presence(dpp::presence(dpp::ps_online, dpp::at_game, "Ragnarok Online"));
        });
    bot.start(dpp::st_return);
}