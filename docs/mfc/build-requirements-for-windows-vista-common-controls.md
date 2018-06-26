---
title: Requisiti di compilazione per i controlli comuni di Windows Vista | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- common controls (MFC), build requirements
- common controls (MFC)
ms.assetid: 025f7d55-55a2-4dcd-8f62-02424e3dcc04
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f8f167ac560fd8e2109c149f30841ecbe3c44fc8
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930976"
---
# <a name="build-requirements-for-windows-vista-common-controls"></a>Requisiti di compilazione per i controlli comuni di Windows Vista
La libreria Microsoft Foundation Class (MFC) supporta la versione 6.1 di Windows Common Controls. I controlli comuni sono inclusi in [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] e la libreria è inclusa in [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)]. La libreria fornisce nuovi metodi che migliorano le classi esistenti e nuove classi e metodi che supportano [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] controlli comuni. Quando si compila l'applicazione, è necessario seguire i requisiti di migrazione e di compilazione descritti nelle sezioni seguenti.  
  
## <a name="compilation-requirements"></a>Requisiti della compilazione  
  
### <a name="supported-versions"></a>Versioni supportate  
 Alcuni nuovi metodi e classi supportano solo [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] e versioni successive, mentre altri metodi supportano anche i sistemi operativi precedenti. Una nota nella sezione `Requirements` di ciascun argomento del metodo specifica quando il sistema operativo minimo richiesto è [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)].  
  
 Anche se il computer non viene eseguito [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)], è possibile compilare un'applicazione MFC che verrà eseguiti nel [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] se si dispongono di file di intestazione MFC versione 6.1 nel computer. Tuttavia, i controlli comuni progettati specificamente per [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] operare solo in tale sistema e vengono ignorati nei sistemi operativi precedenti.  
  
### <a name="supported-character-sets"></a>Set di caratteri supportati  
 I nuovi controlli comuni di Windows supportano solo il set di caratteri Unicode e non il set di caratteri ANSI. Se si compila l'applicazione dalla riga di comando, utilizzare entrambe le seguenti opzioni define (/D) del compilatore per specificare Unicode come set di caratteri sottostante:  
  
```  
/D_UNICODE /DUNICODE  
```  
  
 Se si compila l'applicazione nell'ambiente di sviluppo integrato (IDE) di Visual Studio, specificare il **Set di caratteri Unicode** opzione del **del Set di caratteri** proprietà il **generale**  nodo delle proprietà del progetto.  
  
 La versione ANSI di diversi metodi MFC è stata deprecata a partire dalla versione 6.1 dei controlli comuni di Windows. Per altre informazioni, vedere [API ANSI deprecate](../mfc/deprecated-ansi-apis.md).  
  
## <a name="migration-requirements"></a>Requisiti della migrazione  
 Se si utilizza l'IDE di Visual Studio per compilare una nuova applicazione MFC che utilizza la versione 6.1 dei controlli comuni di Windows, l'IDE automaticamente dichiara un manifest appropriato. Tuttavia, se si esegue la migrazione di un'applicazione MFC esistente da una versione precedente di Visual Studio e si desidera utilizzare i nuovi controlli comuni, l'IDE non fornisce automaticamente le informazioni del manifest per aggiornare l'applicazione. Al contrario, è necessario inserire manualmente il seguente codice sorgente nel **stdafx. h** file:  
  
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
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)   
 [Grafico delle gerarchie](../mfc/hierarchy-chart.md)   
 [API ANSI deprecate](../mfc/deprecated-ansi-apis.md)

