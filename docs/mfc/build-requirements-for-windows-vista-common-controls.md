---
title: Requisiti di compilazione per i controlli comuni di Windows Vista | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- common controls (MFC), build requirements
- common controls (MFC)
ms.assetid: 025f7d55-55a2-4dcd-8f62-02424e3dcc04
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 76919bcdd416ed7195e94ed1fa0b2e3f3a4d573d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="build-requirements-for-windows-vista-common-controls"></a>Requisiti di compilazione per i controlli comuni di Windows Vista
La libreria Microsoft Foundation Class (MFC) supporta la versione 6.1 di Windows Common Controls. I controlli comuni sono inclusi in [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] e la libreria è inclusa in [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)]. La libreria fornisce nuovi metodi che migliorano le classi esistenti e nuove classi e metodi che supportano [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] controlli comuni. Quando si compila l'applicazione, è necessario seguire i requisiti di migrazione e di compilazione descritti nelle sezioni seguenti.  
  
## <a name="compilation-requirements"></a>Requisiti della compilazione  
  
### <a name="supported-versions"></a>Versioni supportate  
 Alcuni nuovi metodi e classi supportano solo [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] e versioni successive, mentre altri metodi supportano anche i sistemi operativi precedenti. Una nota nella sezione `Requirements` di ciascun argomento del metodo specifica quando il sistema operativo minimo richiesto è [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)].  
  
 Anche se il computer non viene eseguito [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)], è possibile compilare un'applicazione MFC che verrà eseguito in [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] se si dispongono di file di intestazione MFC versione 6.1 nel computer in uso. Tuttavia, i controlli comuni progettati specificamente per [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] operare solo in tale sistema e vengono ignorati nei sistemi operativi precedenti.  
  
### <a name="supported-character-sets"></a>Set di caratteri supportati  
 I nuovi controlli comuni di Windows supportano solo il set di caratteri Unicode e non il set di caratteri ANSI. Se si compila l'applicazione dalla riga di comando, utilizzare entrambe le seguenti opzioni define (/D) del compilatore per specificare Unicode come set di caratteri sottostante:  
  
```  
/D_UNICODE /DUNICODE  
```  
  
 Se si compila l'applicazione nell'ambiente di sviluppo integrato (IDE) di Visual Studio, specificare il **Set di caratteri Unicode** opzione del **del Set di caratteri** proprietà il **generale**  nodo delle proprietà del progetto.  
  
 La versione ANSI di diversi metodi MFC è stata deprecata a partire dalla versione 6.1 dei controlli comuni di Windows. Per ulteriori informazioni, vedere [le API ANSI deprecate](../mfc/deprecated-ansi-apis.md).  
  
## <a name="migration-requirements"></a>Requisiti della migrazione  
 Se si utilizza l'IDE di Visual Studio per compilare una nuova applicazione MFC che utilizza la versione 6.1 dei controlli comuni di Windows, l'IDE automaticamente dichiara un manifest appropriato. Tuttavia, se si esegue la migrazione di un'applicazione MFC esistente da una versione precedente di Visual Studio e si desidera utilizzare i nuovi controlli comuni, l'IDE non fornisce automaticamente le informazioni del manifest per aggiornare l'applicazione. Occorre invece inserire il seguente codice sorgente nel file stdafx.h:  
  
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

