---
title: "Basic Mechanics of Attributes | Microsoft Docs"
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
  - "attributes [C++], inserting in code"
  - "attributes [C++], about attributes"
ms.assetid: dc2069c3-b9f3-4a72-965c-4e5208ce8e34
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Basic Mechanics of Attributes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono tre modi per inserire gli attributi nel progetto.  Innanzitutto, è possibile inserire tali manualmente nel codice sorgente.  In secondo luogo, è possibile inserire tali utilizzando la griglia delle proprietà di un oggetto nel progetto.  Infine, è possibile inserire tali utilizzando diverse procedure guidate.  Per ulteriori informazioni su come utilizzare la Finestra Proprietà e le diverse procedure guidate, vedere [Creazione e gestione di progetti Visual C\+\+](../ide/creating-and-managing-visual-cpp-projects.md).  
  
 A partire da Visual C\+\+ .NET, il compilatore riconosce la presenza di attributi in un file di origine e può analizzarli e testare in modo dinamico durante la compilazione.  
  
 Come prima che, quando il progetto viene compilato, il compilatore coprire ogni file di origine C\+\+, scrivendo un file oggetto.  Tuttavia, quando il compilatore rileva un attributo, viene analizzato e sintatticamente è verificato.  Il compilatore chiama quindi dinamicamente un provider dell'attributo per inserire il codice o apportare altre modifiche in fase di compilazione.  L'implementazione del provider varia in base al tipo di attributo.  Ad esempio, gli attributi ATL\-correlati vengono implementati da Atlprov.dll.  
  
 Nella figura seguente viene illustrata la relazione tra il compilatore e il provider dell'attributo.  
  
 ![Comunicazione degli attributi di un componente](../windows/media/vccompattrcomm.png "vcCompAttrComm")  
  
> [!NOTE]
>  L'utilizzo di attributo non modifica il contenuto del file di origine.  L'unico caso in cui il codice generato di attributo è visibile durante le sessioni di debug.  Inoltre, per ogni file di origine nel progetto, è possibile generare un file di testo che visualizzano i risultati della sostituzione di attributo.  Per ulteriori informazioni su questa procedura, vedere [\/Fx \(Codice inserito unione\)](../build/reference/fx-merge-injected-code.md) e  [Eseguire il debug del codice inserito](../Topic/How%20to:%20Debug%20Injected%20Code.md).  
  
 Come la maggior parte dei costrutti C\+\+, gli attributi hanno un set di funzionalità che definisce il corretto utilizzo.  Questa operazione è nota come il contesto dell'attributo e viene indirizzata nella tabella di contesto dell'attributo per ogni argomento di riferimento dell'attributo.  Ad esempio, [coclasse](../windows/coclass.md) l'attributo può essere applicato solo a una classe o una struttura esistente, rispetto a  [cpp\_quote](../windows/cpp-quote.md) attributo, che può essere inserito in qualsiasi punto del file di origine C\+\+.  
  
## Vedere anche  
 [Concepts](../windows/attributed-programming-concepts.md)