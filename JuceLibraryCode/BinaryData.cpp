/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== DailyTrack0.csv ==================
static const unsigned char temp_binary_data_0[] =
"";

const char* DailyTrack0_csv = (const char*) temp_binary_data_0;

//================== DailyTrack1.csv ==================
static const unsigned char temp_binary_data_1[] =
"";

const char* DailyTrack1_csv = (const char*) temp_binary_data_1;

//================== DailyTrack2.csv ==================
static const unsigned char temp_binary_data_2[] =
"";

const char* DailyTrack2_csv = (const char*) temp_binary_data_2;

//================== DailyTrack4.csv ==================
static const unsigned char temp_binary_data_3[] =
"";

const char* DailyTrack4_csv = (const char*) temp_binary_data_3;

//================== Goals0.csv ==================
static const unsigned char temp_binary_data_4[] =
"";

const char* Goals0_csv = (const char*) temp_binary_data_4;

//================== Goals1.csv ==================
static const unsigned char temp_binary_data_5[] =
"";

const char* Goals1_csv = (const char*) temp_binary_data_5;

//================== Goals2.csv ==================
static const unsigned char temp_binary_data_6[] =
"";

const char* Goals2_csv = (const char*) temp_binary_data_6;

//================== Goals4.csv ==================
static const unsigned char temp_binary_data_7[] =
"";

const char* Goals4_csv = (const char*) temp_binary_data_7;

//================== Habits.csv ==================
static const unsigned char temp_binary_data_8[] =
"0,  I even test more\r\n"
"1,  I even test more\r\n"
"2,  I even test more\r\n"
"4,  I even test more\r\n";

const char* Habits_csv = (const char*) temp_binary_data_8;

//================== Habits.csv ==================
static const unsigned char temp_binary_data_9[] =
"";

const char* Habits_csv2 = (const char*) temp_binary_data_9;


const char* getNamedResource (const char* resourceNameUTF8, int& numBytes);
const char* getNamedResource (const char* resourceNameUTF8, int& numBytes)
{
    unsigned int hash = 0;

    if (resourceNameUTF8 != nullptr)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0x9f6ea5e5:  numBytes = 0; return DailyTrack0_csv;
        case 0x9f7cbd66:  numBytes = 0; return DailyTrack1_csv;
        case 0x9f8ad4e7:  numBytes = 0; return DailyTrack2_csv;
        case 0x9fa703e9:  numBytes = 0; return DailyTrack4_csv;
        case 0x7e8be9d7:  numBytes = 0; return Goals0_csv;
        case 0x7e9a0158:  numBytes = 0; return Goals1_csv;
        case 0x7ea818d9:  numBytes = 0; return Goals2_csv;
        case 0x7ec447db:  numBytes = 0; return Goals4_csv;
        case 0x25aac366:  numBytes = 88; return Habits_csv;
        case 0x8fada98c:  numBytes = 0; return Habits_csv2;
        default: break;
    }

    numBytes = 0;
    return nullptr;
}

const char* namedResourceList[] =
{
    "DailyTrack0_csv",
    "DailyTrack1_csv",
    "DailyTrack2_csv",
    "DailyTrack4_csv",
    "Goals0_csv",
    "Goals1_csv",
    "Goals2_csv",
    "Goals4_csv",
    "Habits_csv",
    "Habits_csv2"
};

const char* originalFilenames[] =
{
    "DailyTrack0.csv",
    "DailyTrack1.csv",
    "DailyTrack2.csv",
    "DailyTrack4.csv",
    "Goals0.csv",
    "Goals1.csv",
    "Goals2.csv",
    "Goals4.csv",
    "Habits.csv",
    "Habits.csv"
};

const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8)
{
    for (unsigned int i = 0; i < (sizeof (namedResourceList) / sizeof (namedResourceList[0])); ++i)
    {
        if (namedResourceList[i] == resourceNameUTF8)
            return originalFilenames[i];
    }

    return nullptr;
}

}
