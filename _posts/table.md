/** Sound CDI Configuration Layout

 | Segment Ref   | Group Ref        | Group Repeat       | Group's Type Def    | Fields Ref      |

 | soundCardsSeg() | soundLocalPlayers()   | NUM_LOCAL_SOUND_PLAYERS | playerConfig_type   | description(), fileNum(), volume(), playEvent(), loopEvent(), pauseEvent(), resetEvent() |

 |         | soundCards()       | NUM_REMOTE_SOUND_CARDS  | soundCardConfig_type  |         |

 |         | - cardInfoConfig()    |             |            | reference(), description() |

 |         | - i2cInfoConfig()    |             |            |  i2cBus(), i2cAddressOffset() |

*/