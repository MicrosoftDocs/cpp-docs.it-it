---
title: "Errore degli strumenti del linker LNK2022 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2022"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2022"
ms.assetid: d2128c73-dde3-4b8e-a9b2-0a153acefb3b
caps.latest.revision: 15
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK2022
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

operazione sui metadati non riuscita \(HRESULT\): messaggio\_errore  
  
 È stato rilevato un errore durante l'unione dei metadati.  Correggere gli errori relativi ai metadati per effettuare correttamente il collegamento.  
  
 Un modo per diagnosticare questo problema consiste nell'eseguire **ildasm –tokens** sui file oggetto per individuare i tipi per i quali vengono elencati i token in `error_message` e nel cercare le differenze.  Nei metadati due tipi diversi non possono avere lo stesso nome, anche se l'unica differenza è rappresentata dall'attributo LayoutType.  
  
 L'errore LNK2022 può verificarsi quando un tipo, ad esempio una struttura, è presente in più moduli con lo stesso nome, ma con definizioni in conflitto, e quando si esegue la compilazione con [\/clr](../../build/reference/clr-common-language-runtime-compilation.md).  In questo caso, assicurarsi che il tipo presenti una definizione identica in tutti i moduli.  Il nome del tipo viene elencato in `error_message`.  
  
 È inoltre possibile che l'errore LNK2022 venga generato quando il linker individua un file di metadati in un percorso differente rispetto a quello indicato al compilatore \(con [\#using](../../preprocessor/hash-using-directive-cpp.md)\).  Assicurarsi che il file metadati \(.dll o .netmodule\), quando lo si passa al linker, si trovi nello stesso percorso di quando è stato passato al compilatore.  
  
 Quando si compila un'applicazione ATL, se [\_ATL\_MIXED](../Topic/_ATL_MIXED.md) è presente in almeno uno dei moduli, è necessario utilizzarlo in tutti.  
  
## Esempio  
 Nell'esempio riportato di seguito viene definito un tipo vuoto.  
  
```  
// LNK2022_a.cpp  
// compile with: /clr /c  
public ref class Test {};  
```  
  
## Esempio  
 In questo esempio viene dimostrato che non è possibile collegare due file di codice sorgente che contengono tipi con lo stesso nome ma con definizioni diverse.  
  
 Nell'esempio seguente viene generato l'errore LNK2022.  
  
```  
// LNK2022_b.cpp  
// compile with: LNK2022_a.cpp /clr /LD   
// LNK2022 expected  
public ref class Test {  
   void func() {}  
   int var;  
};  
```