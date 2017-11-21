---
title: Documentazione XML (Visual C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- XML documentation
- XML, documentation comments in source code
- comments, C++ source code files
- /// delimiter for C++ documentation
ms.assetid: a1aec1c5-b2d1-4c74-83ae-1dbbbb76b506
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: fb5b9968ad652e5ab6ef4dd29eb3c6ccc6da7493
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="xml-documentation-visual-c"></a>Documentazione XML (Visual C++)
In Visual C++, è possibile aggiungere commenti al codice sorgente che verrà elaborato in un file XML. Questo file può quindi essere l'input a un processo che crea la documentazione per le classi nel codice.  
  
 In un file di codice Visual C++, commenti della documentazione XML devono essere specificati direttamente prima di una definizione di metodo o tipo. I commenti possono essere utilizzati per popolare il suggerimento dati Intellisense QuickInfo negli scenari seguenti:  
  
1.  Quando il codice viene compilato come un componente Windows Runtime con un file con estensione winmd associato  
  
2.  Quando il codice sorgente è incluso nel progetto corrente  
  
3.  in una raccolta i cui dichiarazioni di tipo e le implementazioni si trovano nello stesso file di intestazione  
  
> [!NOTE]
>  Nella versione corrente, i commenti del codice non vengono elaborati su modelli o qualsiasi elemento che contiene un tipo di modello (ad esempio, una funzione che accetta un parametro come un modello). Aggiunta di tali commenti si otterrà un comportamento indefinito.  
  
 Per informazioni dettagliate sulla creazione di un file XML con i commenti della documentazione, vedere gli argomenti seguenti.  
  
|Per informazioni su|Vedere|  
|---------------------------|---------|  
|Le opzioni del compilatore da utilizzare|[/doc](../build/reference/doc-process-documentation-comments-c-cpp.md)|  
|È possibile utilizzare per fornire comunemente tag funzionalità utilizzate nella documentazione|[Tag consigliati per i commenti relativi alla documentazione](../ide/recommended-tags-for-documentation-comments-visual-cpp.md)|  
|Le stringhe ID generate dal compilatore per identificare i costrutti di codice|[L'elaborazione del File con estensione XML](../ide/dot-xml-file-processing.md)|  
|Come delimitare i tag della documentazione|[Delimitatori per i tag della documentazione di Visual C++](../ide/delimiters-for-visual-cpp-documentation-tags.md)|  
|La generazione di un file XML da uno o più file xdc.|[Riferimento a XDCMake](../ide/xdcmake-reference.md)|  
|Collegamenti a informazioni su XML che si riferisce alle aree di funzionalità di Visual Studio|[XML in Visual Studio](/visualstudio/xml-tools/xml-tools-in-visual-studio)|  
  
 Se è necessario inserire i caratteri speciali XML nel testo di un commento di documentazione, è necessario utilizzare l'entità XML o una sezione CDATA.  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)