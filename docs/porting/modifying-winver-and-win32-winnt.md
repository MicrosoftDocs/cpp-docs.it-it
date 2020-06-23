---
title: Aggiornare WINVER e _WIN32_WINNT
description: Quando e come aggiornare le macro WINVER e _WIN32_WINNT nei progetti di Visual Studio C++ aggiornati.
ms.date: 06/19/2020
helpviewer_keywords:
- WINVER in an upgraded Visual Studio C++ project
- _WIN32_WINNT in an upgraded Visual Studio C++ project
ms.assetid: 6a1f1d66-ae0e-48a7-81c3-524d8e8f3447
ms.openlocfilehash: a0faed612517bf26cd89473e1aef248fb9e7b33e
ms.sourcegitcommit: 493fd8747f832e1facb9a76c437a25a5c9fb55f6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/22/2020
ms.locfileid: "85141054"
---
# <a name="update-winver-and-_win32_winnt"></a>Aggiornare WINVER e _WIN32_WINNT

Quando si usa il Windows SDK, è possibile specificare le versioni di Windows in cui è possibile eseguire il codice. Le macro del preprocessore **WINVER** e **_WIN32_WINNT** specificano la versione minima del sistema operativo supportata dal codice. Visual Studio e il supporto del compilatore Microsoft C++ destinati a Windows 7 SP1 e versioni successive. I set di strumenti meno recenti includono il supporto per Windows XP SP2, Windows Server 2003 SP1, vista e Windows Server 2008. Windows 95, Windows 98, Windows ME, Windows NT e Windows 2000 non sono supportati.

Quando si aggiorna un progetto precedente, potrebbe essere necessario aggiornare le macro **WINVER** o **_WIN32_WINNT** . Se sono assegnati valori per una versione non supportata di Windows, è possibile che vengano visualizzati errori di compilazione correlati a queste macro.

## <a name="remarks"></a>Commenti

Per modificare le macro, in un file di intestazione, ad esempio in *targetver. h*, incluso in alcuni modelli di progetto destinati a Windows, aggiungere le righe seguenti.

```C
#define WINVER 0x0A00
#define _WIN32_WINNT 0x0A00
```

Le macro nell'esempio sono impostate in modo da essere destinate a tutte le versioni del sistema operativo Windows 10. I valori possibili sono elencati nel file di intestazione di Windows *sdkddkver. h*, che definisce le macro per ogni versione principale di Windows. Per compilare l'applicazione in modo da supportare una piattaforma Windows precedente, includere *WinSDKVer. h*. Impostare quindi le macro **WINVER** e **_WIN32_WINNT** sulla piattaforma supportata meno recente prima di includere *sdkddkver. h*. Di seguito sono riportate le righe della versione Windows 10 SDK di *sdkddkver. h* che codificano i valori per ogni versione principale di Windows:

```C
//
// _WIN32_WINNT version constants
//
#define _WIN32_WINNT_NT4                    0x0400 // Windows NT 4.0
#define _WIN32_WINNT_WIN2K                  0x0500 // Windows 2000
#define _WIN32_WINNT_WINXP                  0x0501 // Windows XP
#define _WIN32_WINNT_WS03                   0x0502 // Windows Server 2003
#define _WIN32_WINNT_WIN6                   0x0600 // Windows Vista
#define _WIN32_WINNT_VISTA                  0x0600 // Windows Vista
#define _WIN32_WINNT_WS08                   0x0600 // Windows Server 2008
#define _WIN32_WINNT_LONGHORN               0x0600 // Windows Vista
#define _WIN32_WINNT_WIN7                   0x0601 // Windows 7
#define _WIN32_WINNT_WIN8                   0x0602 // Windows 8
#define _WIN32_WINNT_WINBLUE                0x0603 // Windows 8.1
#define _WIN32_WINNT_WINTHRESHOLD           0x0A00 // Windows 10
#define _WIN32_WINNT_WIN10                  0x0A00 // Windows 10
```

Per un approccio più accurato al controllo delle versioni, è possibile usare le costanti della versione NTDDI in *sdkddkver. h*. Di seguito sono riportate alcune delle macro definite da *sdkddkver. h* in Windows 10 SDK versione 10.0.18362.0:

```C
//
// NTDDI version constants
//
#define NTDDI_WIN7                          0x06010000
#define NTDDI_WIN8                          0x06020000
#define NTDDI_WINBLUE                       0x06030000
#define NTDDI_WINTHRESHOLD                  0x0A000000  /* ABRACADABRA_THRESHOLD */
#define NTDDI_WIN10                         0x0A000000  /* ABRACADABRA_THRESHOLD */
#define NTDDI_WIN10_TH2                     0x0A000001  /* ABRACADABRA_WIN10_TH2 */
#define NTDDI_WIN10_RS1                     0x0A000002  /* ABRACADABRA_WIN10_RS1 */
#define NTDDI_WIN10_RS2                     0x0A000003  /* ABRACADABRA_WIN10_RS2 */
#define NTDDI_WIN10_RS3                     0x0A000004  /* ABRACADABRA_WIN10_RS3 */
#define NTDDI_WIN10_RS4                     0x0A000005  /* ABRACADABRA_WIN10_RS4 */
#define NTDDI_WIN10_RS5                     0x0A000006  /* ABRACADABRA_WIN10_RS5 */
#define NTDDI_WIN10_19H1                    0x0A000007  /* ABRACADABRA_WIN10_19H1*/

#define WDK_NTDDI_VERSION                   NTDDI_WIN10_19H1 /* ABRACADABRA_WIN10_19H1 */

//
// masks for version macros
//
#define OSVERSION_MASK      0xFFFF0000
#define SPVERSION_MASK      0x0000FF00
#define SUBVERSION_MASK     0x000000FF

//
// macros to extract various version fields from the NTDDI version
//
#define OSVER(Version)  ((Version) & OSVERSION_MASK)
#define SPVER(Version)  (((Version) & SPVERSION_MASK) >> 8)
#define SUBVER(Version) (((Version) & SUBVERSION_MASK) )
```

Le macro **OSVER**, **SPVER**e **SUBVER** possono essere usate nel codice per controllare la compilazione condizionale per diversi livelli di supporto API.

È possibile che non vengano visualizzate tutte le versioni di Windows elencate in *sdkddkver. h* che si sta esaminando. Ciò significa che probabilmente si sta usando una versione precedente del Windows SDK. Per impostazione predefinita, i nuovi progetti Windows in Visual Studio usano Windows 10 SDK.

> [!NOTE]
> I valori potrebbero non funzionare se si includono intestazioni MFC interne nell'applicazione.

È anche possibile definire questa macro con l'opzione del compilatore `/D`. Per altre informazioni, vedere [/D (Preprocessor Definitions)](../build/reference/d-preprocessor-definitions.md).

Per altre informazioni sul significato delle macro, vedere [Uso delle intestazioni di Windows](/windows/win32/WinProg/using-the-windows-headers).

## <a name="see-also"></a>Vedere anche

[Cronologia delle modifiche di Visual C++](../porting/visual-cpp-change-history-2003-2015.md)
