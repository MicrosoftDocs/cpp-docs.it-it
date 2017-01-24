---
title: "Requisiti di compilazione per i controlli comuni di Windows Vista | Microsoft Docs"
ms.custom: ""
ms.date: "12/09/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli comuni (MFC)"
  - "controlli comuni (MFC), requisiti di compilazione"
ms.assetid: 025f7d55-55a2-4dcd-8f62-02424e3dcc04
caps.latest.revision: 18
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Requisiti di compilazione per i controlli comuni di Windows Vista
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria Microsoft Foundation Class \(MFC\) supporta la versione 6.1 di Windows Common Controls.  I controlli comuni sono inclusi in [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] e la libreria è inclusa in [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)].  La libreria fornisce nuovi metodi che migliorano le classi esistenti e nuovi metodi e classi che supportano i controlli comuni [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)].  Quando si compila l'applicazione, è necessario seguire i requisiti di migrazione e di compilazione descritti nelle sezioni seguenti.  
  
## Requisiti della compilazione  
  
### Versioni Supportate  
 Alcuni nuovi metodi e classi supportano solo [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] e versioni successive, mentre altri metodi supportano anche i sistemi operativi precedenti.  Una nota nella sezione `Requirements` di ciascun argomento del metodo specifica quando il sistema operativo obbligatorio minimo è [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)].  
  
 Anche se il computer non esegue [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)], è possibile compilare un'applicazione MFC che verrà eseguita in [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] se si dispone di file di intestazione della versione 6.1 MFC nel computer.  Tuttavia, i controlli comuni progettati specificamente per [!INCLUDE[windowsver](../build/reference/includes/windowsver_md.md)] funzionano solo in tale sistema e vengono ignorati i sistemi operativi precedenti.  
  
### Set di caratteri supportati  
 I nuovi controlli comuni di Windows supportano solo il set di caratteri Unicode e non il set di caratteri ANSI.  Se si compila l'applicazione dalla riga di comando, utilizzare entrambe le seguenti opzioni define \(\/D\) del compilatore per specificare Unicode come set di caratteri sottostante:  
  
```  
/D_UNICODE /DUNICODE  
```  
  
 Se si compila l'applicazione nell'ambiente di sviluppo integrato \(IDE\) di Visual Studio, specificare l'opzione **Set di caratteri Unicode** della proprietà **Set di caratteri** nel nodo di **Generale** delle proprietà del progetto.  
  
 La versione ANSI di diversi metodi MFC è stata deprecata ad iniziare con la versione 6.1 dei controlli comuni di Windows.  Per ulteriori informazioni, vedere [API ANSI deprecate](../mfc/deprecated-ansi-apis.md).  
  
## Requisiti della migrazione  
 Se si utilizza l'IDE di Visual Studio per compilare una nuova applicazione MFC che utilizza la versione 6.1 dei controlli comuni di Windows, l'IDE automaticamente dichiara un manifest appropriato.  Tuttavia, se si esegue la migrazione di un'applicazione MFC esistente da una versione precedente di Visual Studio e si desidera utilizzare i nuovi controlli comuni, l'IDE non fornisce automaticamente le informazioni del manifest per aggiornare l'applicazione.  Invece, è necessario inserire il seguente codice sorgente nel file stdafx.h:  
  
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
  
## Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)   
 [Grafico delle gerarchie](../mfc/hierarchy-chart.md)   
 [API ANSI deprecate](../mfc/deprecated-ansi-apis.md)