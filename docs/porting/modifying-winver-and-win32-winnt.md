---
title: Modifica di WINVER e _WIN32_WINNT
ms.date: 09/04/2017
helpviewer_keywords:
- WINVER in an upgraded Visual C++ project
- _WIN32_WINNT in an upgraded Visual C++ project
ms.assetid: 6a1f1d66-ae0e-48a7-81c3-524d8e8f3447
ms.openlocfilehash: 3381b6657f78144e7804112135c437824d8555fe
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51332245"
---
# <a name="modifying-winver-and-win32winnt"></a>Modifica di WINVER e _WIN32_WINNT

Visual C++ non supporta più i sistemi operativi Windows 95, Windows 98, Windows ME, Windows NT o Windows 2000. Se le macro **WINVER** o **_WIN32_WINNT** vengono assegnate a una di queste versioni di Windows, è necessario modificarle. Quando si aggiorna un progetto creato con una versione precedente di Visual C++, è possibile che vengano generati errori di compilazione relativi alle macro **WINVER** o **_WIN32_WINNT** se queste vengono assegnate a una versione di Windows non più supportata.

## <a name="remarks"></a>Note

Per modificare le macro, aggiungere le seguenti righe in un file di intestazione (ad esempio, il file targetver.h incluso nella creazione di un progetto destinato a Windows).

```C
#define WINVER 0x0A00
#define _WIN32_WINNT 0x0A00
```

Questo esempio riguarda il sistema operativo Windows 10. Tali valori vengono elencati nel file di intestazione SDKDDKVer.h di Windows, il quale definisce anche le macro di ogni versione di Windows. È necessario aggiungere l'istruzione #define prima di includere il file SDKDDKVer.h. Di seguito sono riportate le righe relative alla versione per Windows 10 del file SDKDDKVer.h; tali righe consentono di codificare i valori di ogni versione di Windows:

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

Se non vengono visualizzate tutte le versioni di Windows elencate in una copia del file SDKDDKVer.h che si sta consultando, è possibile che sia in uso una versione obsoleta dell'SDK di Windows. Per impostazione predefinita, i progetti Win32 in Visual Studio 2017 usano l'SDK di Windows 10.

> [!NOTE]
> I valori potrebbero non funzionare se si includono intestazioni MFC interne nell'applicazione.

È anche possibile definire questa macro con l'opzione del compilatore `/D`. Per altre informazioni, vedere [/D (definizioni preprocessore)](../build/reference/d-preprocessor-definitions.md).

Per altre informazioni sul significato delle macro, vedere [Uso delle intestazioni di Windows](/windows/desktop/WinProg/using-the-windows-headers).

## <a name="see-also"></a>Vedere anche

[Cronologia delle modifiche di Visual C++](../porting/visual-cpp-change-history-2003-2015.md)