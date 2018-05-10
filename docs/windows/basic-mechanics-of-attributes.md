---
title: Meccanismi di base degli attributi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++], inserting in code
- attributes [C++], about attributes
ms.assetid: dc2069c3-b9f3-4a72-965c-4e5208ce8e34
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d6db2994a2606f6c4d0cb4cd581ec46d87ca3d2c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="basic-mechanics-of-attributes"></a>Meccanismi di base degli attributi
Esistono tre modi per inserire attributi nel progetto. In primo luogo, è possibile inserirli manualmente il codice sorgente. In secondo luogo, è possibile inserirli utilizzando la griglia delle proprietà di un oggetto nel progetto. Infine, è possibile inserirli mediante le procedure guidate di diversi. Per ulteriori informazioni sull'utilizzo di finestra proprietà e le varie procedure guidate, vedere [creazione e gestione di progetti Visual C++](../ide/creating-and-managing-visual-cpp-projects.md).  
  
 Come prima, durante la compilazione del progetto, il compilatore analizza ogni file di origine C++, creando un file oggetto. Tuttavia, quando il compilatore rileva un attributo, viene analizzato e verifica la sintassi. Quindi il compilatore chiama in modo dinamico un provider di attributi per inserire il codice o apportare altre modifiche in fase di compilazione. L'implementazione del provider è diverso a seconda del tipo di attributo. Ad esempio, gli attributi relativi ATL vengono implementati da Atlprov.  
  
 La figura seguente illustra la relazione tra il compilatore e il provider di attributi.  
  
 ![Comunicazione degli attributi di componente](../windows/media/vccompattrcomm.gif "vcCompAttrComm")  
  
> [!NOTE]
>  Utilizzo dell'attributo non modifica il contenuto del file di origine. L'unica volta che è visibile il codice di attributo generato è durante le sessioni di debug. Inoltre, per ogni file di origine nel progetto, è possibile generare un file di testo che visualizza i risultati della sostituzione di attributo. Per ulteriori informazioni su questa procedura, vedere [/Fx (unisce il codice)](../build/reference/fx-merge-injected-code.md) e [debug del codice inserito](/visualstudio/debugger/how-to-debug-injected-code).  
  
 Ad esempio la maggior parte dei costrutti C++, gli attributi hanno un set di caratteristiche che definisce il corretto utilizzo. Questo è il contesto dell'attributo e viene risolto nella tabella di contesto per ogni argomento di riferimento di attributo. Ad esempio, il [coclasse](../windows/coclass.md) attributo può essere applicato solo a una classe esistente o di una struttura, anziché il [cpp_quote](../windows/cpp-quote.md) attributo, che può essere inserito ovunque all'interno di un file di origine C++.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../windows/attributed-programming-concepts.md)