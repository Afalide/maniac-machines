
#ifndef user_case_state_a2_hpp
#define user_case_state_a2_hpp

#include "../state.hpp"
#include "state_a.hpp"

struct state_a2
    : public sm::basic_state<state_a2, state_a>
{
    void on_enter();
    void on_exit();
};

#endif
