---
title: "Documentazione XML (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "/// (delimitatore per documentazione) (C++)"
  - "commenti, file di codice sorgente C++"
  - "documentazione XML"
  - "XML, commenti per la documentazione nel codice sorgente"
ms.assetid: a1aec1c5-b2d1-4c74-83ae-1dbbbb76b506
caps.latest.revision: 18
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Documentazione XML (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In Visual C\+\+, è possibile aggiungere commenti al codice sorgente che verrà elaborato in un file xml.  Questo file può essere l'input in un processo che crea la documentazione per le classi nel codice.  
  
 In un file di codice di Visual C\+\+, commenti della documentazione XML devono risiedere immediatamente prima di un metodo o di una definizione di tipo.  I commenti possono essere utilizzati per popolare il suggerimento dati Intellisense informazioni rapide negli scenari seguenti:  
  
1.  quando il codice viene compilato come parte del runtime di Windows con associato un file di .winmd  
  
2.  quando il codice sorgente è incluso nel progetto corrente  
  
3.  in una raccolta di cui dichiarazioni di tipo e le implementazioni si trovano nello stesso file di intestazione  
  
> [!NOTE]
>  Nella versione corrente, i commenti del codice non vengono elaborati sui modelli o su qualsiasi elemento che contengono un tipo di modello, ad esempio una funzione che accetta un parametro come modello\).  L'aggiunta di questi commenti è un comportamento indefinito.  
  
 Per informazioni dettagliate sulla creazione di un file XML con i commenti della documentazione, vedere i seguenti argomenti.  
  
|Per informazioni su|Vedere|  
|-------------------------|------------|  
|Le opzioni del compilatore utilizzare|[\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md)|  
|Tag che è possibile utilizzare per fornire funzionalità comunemente utilizzati nella documentazione|[Tag consigliati per i commenti relativi alla documentazione](../ide/recommended-tags-for-documentation-comments-visual-cpp.md)|  
|Le stringhe ID che il compilatore genera per identificare i costrutti nel codice|[Elaborare il file xml](../ide/dot-xml-file-processing.md)|  
|Come delimitare i tag della documentazione|[Delimitatori per i tag della documentazione di Visual C\+\+](../ide/delimiters-for-visual-cpp-documentation-tags.md)|  
|Generazione di file XML da uno o più file xdc.|[Riferimento di XDCMake](../ide/xdcmake-reference.md)|  
|Collegamenti a informazioni su XML in relazione alle aree funzionali di Visual Studio|[XML in Visual Studio](../Topic/XML%20Tools%20in%20Visual%20Studio.md)|  
  
 Se è necessario inserire caratteri speciali XML nel testo di un commento relativo alla documentazione, è necessario utilizzare entità XML o una sezione CDATA.  
  
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)