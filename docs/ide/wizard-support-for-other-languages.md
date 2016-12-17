---
title: "Supporto della procedura guidata per altre lingue | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.EastAsianLanguages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "supporto linguaggio per progetti MFC"
  - "progetti [C++], supporto delle lingue"
  - "procedure guidate [C++], supporto delle lingue"
ms.assetid: b653c673-0687-455c-885f-15d7e2f4149d
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto della procedura guidata per altre lingue
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Durante l'installazione di Visual Studio, vengono rilevate le impostazioni locali del sistema e vengono installati uno o più modelli per la lingua appropriata corrispondente.  Per le impostazioni locali dell'Europa occidentale, ad esempio, vengono installate le lingue inglese, francese, italiano, spagnolo e tedesco.  Queste lingue vengono visualizzate nell'elenco **Lingua risorse** della schermata [Tipo di applicazione](../mfc/reference/application-type-mfc-application-wizard.md) della Creazione guidata applicazione MFC.  
  
## Modelli di lingua  
 Poiché sono basati sulla codifica ANSI, non tutti i modelli vengono installati su tutti i sistemi e non sempre è possibile modificare qualsiasi risorsa.  Per impostazione predefinita, ad esempio, le risorse in lingua giapponese non sono modificabili in un sistema in cui è stata impostata la lingua francese.  
  
 Se si utilizza Windows 2000 o una versione successiva e si desidera creare un'applicazione MFC in un'altra lingua, copiare sul sistema la directory del modello per la lingua appropriata dal supporto di installazione di Visual Studio \(disco 1\).  
  
> [!NOTE]
>  Per modificare il progetto creato, definire le impostazioni locali di sistema appropriate per la lingua selezionata.  
  
 A ogni modello viene assegnata una cartella nella directory \\Microsoft Visual Studio .NET 2003\\Vc7\\VCWizards\\mfcappwiz\\templates\\, come illustrato nella tabella riportata di seguito.  Per accedere al modello della lingua desiderata, copiare la cartella appropriata nella directory \\mfcappwiz\\templates\\ del computer in uso.  Al termine di questa operazione, la lingua verrà visualizzata nell'elenco **Lingua risorse** nella pagina **Tipo di applicazione** della Creazione guidata applicazione MFC.  
  
### Modelli di lingue forniti in Visual Studio .NET  
  
|Linguaggio|Modello|  
|----------------|-------------|  
|Cinese \(tradizionale\)|1028|  
|Cinese \(semplificato\)|2052|  
|Inglese|1033|  
|Francese|1036|  
|Tedesco|1031|  
|Italiano|1040|  
|Giapponese|1041|  
|Coreano|1042|  
|Spagnolo|3082|  
  
## Formato dei file generati dalle procedure guidate di Visual C\+\+  
 Quando la versione localizzata installata di Visual Studio non corrisponde alle impostazioni locali di sistema, le procedure guidate di Visual C\+\+ generano progetti Unicode.  In caso di installazione della versione giapponese di Visual Studio su un computer con impostazioni internazionali impostate su una lingua diversa dal giapponese, ad esempio, le procedure guidate di Visual C\+\+ genereranno progetti costituiti da file Unicode.  Ciò si verifica comunemente sui computer configurati con pacchetti Windows multilingue \(MUI\).  
  
 Questo comportamento differisce da quello dei sistemi in cui le impostazioni locali di sistema corrispondono alla versione localizzata di Visual Studio.  In questo caso, i file di progetto vengono creati nella tabella codici ANSI del sistema.  
  
## Vedere anche  
 [Tipi di file creati per i progetti di Visual C\+\+](../ide/file-types-created-for-visual-cpp-projects.md)   
 [Creazione e gestione di progetti Visual C\+\+](../ide/creating-and-managing-visual-cpp-projects.md)