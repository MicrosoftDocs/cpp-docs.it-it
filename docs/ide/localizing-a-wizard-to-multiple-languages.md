---
title: "Localizzazione di una procedura guidata in pi&#249; lingue | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "creazioni guidate personalizzate, localizzazione"
  - "globalizzazione [C++], procedure guidate"
  - "localizzazione [C++], procedure guidate"
  - "procedure guidate [C++], localizzazione"
ms.assetid: 879885c2-fafd-44fd-8032-bf0c301f4f45
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Localizzazione di una procedura guidata in pi&#249; lingue
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile creare una procedura guidata in tutte le lingue per le quali è fornito il supporto in Visual Studio.  Per impostazione predefinita, quando si installa Visual Studio le impostazioni locali vengono automaticamente tratte dal Registro di sistema e vengono forniti i modelli appropriati per tali impostazioni.  
  
 In Visual Studio vengono utilizzati ID lingua per identificare il supporto linguistico richiesto da una procedura guidata.  Per impostazione predefinita l'ID lingua viene impostato sul valore decimale della voce di Registro HKEY\_CURRENT\_USER\\Software\\Microsoft\\VisualStudio\\7.0\\General\\UILanguage.  Se nella procedura guidata non viene rilevata alcuna voce relativa alla lingua, viene utilizzata come lingua predefinita l'inglese \(1033\).  
  
> [!NOTE]
>  Per l'elenco dei valori decimali relativi alla lingua, vedere [Supporto della procedura guidata per altre lingue](../ide/wizard-support-for-other-languages.md).  
  
 L'ID lingua viene specificato come un parametro personalizzato nel [file VSZ](../Topic/Configuring%20.Vsz%20Files%20to%20Start%20Wizards.md) nei percorsi in cui si trovano i [file HTML](../ide/html-files.md) e i [file modello](../ide/template-files.md).  
  
 È necessario specificare percorsi per ciascuna lingua per la quale si fornisce un file HTM.  
  
## Esempio  
 L'impostazione nel file VSZ dei parametri personalizzati che seguono indica che il codice HTML viene fornito in inglese \(1033\), giapponese \(1041\) e tedesco \(1031\).  
  
```  
Param="START_PATH\HTML\1033"  
Param="START_PATH\HTML\1041"  
Param="START_PATH\HTML\1031"  
Param="START_PATH\Templates\1033"  
Param="START_PATH\Templates\1041"  
Param="START_PATH\Templates\1031"  
```  
  
 L'impostazione dei parametri personalizzati precedentemente descritti determina l'impostazione della struttura della directory della procedura guidata nel modo seguente:  
  
```  
MyWizard1  
   HTML  
      1033  
         default.htm  
         myEnglishHTML.htm  
      1041  
         default.htm  
         myJapaneseHTML.htm  
      1031  
         default.htm  
         myGermanHTML.htm  
   Templates  
      1033  
         stdafx.h  
         stdafx.cpp  
      1041  
         stdafx.h  
         stdafx.cpp  
      1031  
         stdafx.h  
         stdafx.cpp  
   Images  
      HtmlPage1.bmp  
      HtmlPage2.jpg  
   Scripts  
      Default.js  
```  
  
## Vedere anche  
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [Parametri personalizzati nel file VSZ della procedura guidata](../ide/custom-parameters-in-the-wizard-dot-vsz-file.md)