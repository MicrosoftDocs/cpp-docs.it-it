---
title: Requisiti di compilazione per i controlli comuni di Windows Vista
ms.date: 11/04/2016
helpviewer_keywords:
- common controls (MFC), build requirements
- common controls (MFC)
ms.assetid: 025f7d55-55a2-4dcd-8f62-02424e3dcc04
ms.openlocfilehash: 1a2e79d91a41ea178eeb6f74ec7fa7b22588b277
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62386252"
---
# <a name="build-requirements-for-windows-vista-common-controls"></a>Requisiti di compilazione per i controlli comuni di Windows Vista

La libreria Microsoft Foundation Class (MFC) supporta la versione 6.1 di Windows Common Controls. I controlli comuni sono inclusi in Windows Vista e la libreria è inclusa in Visual Studio SDK. La libreria fornisce nuovi metodi che migliorano le classi esistenti e nuove classi e metodi che supportano i controlli comuni di Windows Vista. Quando si compila l'applicazione, è necessario seguire i requisiti di migrazione e di compilazione descritti nelle sezioni seguenti.

## <a name="compilation-requirements"></a>Requisiti della compilazione

### <a name="supported-versions"></a>Versioni supportate

Alcuni nuovi metodi e classi supporta solo Windows Vista e versioni successive, mentre altri metodi supportano anche i sistemi operativi precedenti. Una nota nella `Requirements` sezione di ciascun argomento del metodo specifica quando il valore minimo obbligatorio del sistema operativo è Windows Vista.

Anche se il computer non viene eseguito Windows Vista, è possibile compilare un'applicazione MFC che verrà eseguito in Windows Vista, se si dispone di file di intestazione MFC versione 6.1 nel computer. Tuttavia, i controlli comuni progettati specificamente per Windows Vista funzionano solo in tale sistema e vengono ignorati nei sistemi operativi precedenti.

### <a name="supported-character-sets"></a>Set di caratteri supportati

I nuovi controlli comuni di Windows supportano solo il set di caratteri Unicode e non il set di caratteri ANSI. Se si compila l'applicazione dalla riga di comando, utilizzare entrambe le seguenti opzioni define (/D) del compilatore per specificare Unicode come set di caratteri sottostante:

```
/D_UNICODE /DUNICODE
```

Se si compila l'applicazione nell'ambiente di sviluppo integrato (IDE) di Visual Studio, specificare il **Set di caratteri Unicode** opzione delle **del Set di caratteri** proprietà nel **generale**  nodo delle proprietà del progetto.

La versione ANSI di diversi metodi MFC è stata deprecata a partire dalla versione 6.1 dei controlli comuni di Windows. Per altre informazioni, vedere [API ANSI deprecate](../mfc/deprecated-ansi-apis.md).

## <a name="migration-requirements"></a>Requisiti della migrazione

Se si utilizza l'IDE di Visual Studio per compilare una nuova applicazione MFC che utilizza la versione 6.1 dei controlli comuni di Windows, l'IDE automaticamente dichiara un manifest appropriato. Tuttavia, se si esegue la migrazione di un'applicazione MFC esistente da una versione precedente di Visual Studio e si desidera utilizzare i nuovi controlli comuni, l'IDE non fornisce automaticamente le informazioni del manifest per aggiornare l'applicazione. In alternativa, è necessario inserire manualmente il seguente codice sorgente nel **stdafx. h** file:

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

[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[Grafico della gerarchia](../mfc/hierarchy-chart.md)<br/>
[API ANSI deprecate](../mfc/deprecated-ansi-apis.md)
