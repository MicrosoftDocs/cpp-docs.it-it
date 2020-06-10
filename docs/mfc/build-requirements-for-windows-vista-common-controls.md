---
title: Requisiti di compilazione per i controlli comuni di Windows
ms.date: 08/19/2019
helpviewer_keywords:
- Common Controls (MFC), build requirements
- Common Controls (MFC)
ms.assetid: 025f7d55-55a2-4dcd-8f62-02424e3dcc04
ms.openlocfilehash: cf2139e04d2f72feb7951010caa351d67ccc5a93
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619737"
---
# <a name="build-requirements-for-windows-common-controls"></a>Requisiti di compilazione per i controlli comuni di Windows

La libreria MFC (Microsoft Foundation Class) supporta i [controlli comuni di Windows](/windows/win32/controls/common-controls-intro). I controlli comuni sono inclusi in Windows e la libreria è inclusa in Visual Studio. La libreria MFC fornisce nuovi metodi che migliorano le classi esistenti, oltre a classi e metodi aggiuntivi che supportano i controlli comuni di Windows. Quando si compila l'applicazione, è necessario seguire i requisiti di migrazione e di compilazione descritti nelle sezioni seguenti.

## <a name="compilation-requirements"></a>Requisiti della compilazione

### <a name="supported-versions"></a>Versioni supportate

MFC supporta tutte le versioni dei controlli comuni. Per informazioni sulle versioni dei controlli comuni di Windows, vedere [versioni del controllo comuni](/windows/win32/controls/common-control-versions).

### <a name="supported-character-sets"></a>Set di caratteri supportati

I controlli comuni di Windows supportano solo il set di caratteri Unicode e non il set di caratteri ANSI. Se si compila l'applicazione dalla riga di comando, utilizzare entrambe le seguenti opzioni define (/D) del compilatore per specificare Unicode come set di caratteri sottostante:

```
/D_UNICODE /DUNICODE
```

Se l'applicazione viene compilata nell'IDE di Visual Integrated Development Environment studio, specificare l'opzione **set di caratteri Unicode** della proprietà **set di caratteri** nel nodo **generale** delle proprietà del progetto.

## <a name="migration-requirements"></a>Requisiti della migrazione

Se si usa l'IDE di Visual Studio per compilare una nuova applicazione MFC che usa i controlli comuni di Windows, l'IDE dichiara automaticamente un manifesto appropriato. Tuttavia, se si esegue la migrazione di un'applicazione MFC esistente da Visual Studio 2005 o versioni precedenti e si desidera utilizzare i controlli comuni, l'IDE non fornisce automaticamente informazioni sul manifesto per aggiornare l'applicazione. Al contrario, è necessario inserire manualmente il codice sorgente seguente nel file di intestazione precompilata:

```
#ifdef UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif
```

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](general-mfc-topics.md)<br/>
[Grafico delle gerarchie](hierarchy-chart.md)<br/>
[API ANSI deprecate](deprecated-ansi-apis.md)
