---
title: Meccanismi di base degli attributi | Microsoft Docs
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
ms.openlocfilehash: 3bb7ff68f9c17f7b90261c2c96630911454842a5
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39462492"
---
# <a name="basic-mechanics-of-attributes"></a>Meccanismi di base degli attributi
Esistono tre modi per inserire attributi nel progetto. In primo luogo, è possibile inserirli manualmente il codice sorgente. In secondo luogo, è possibile inserire tramite la griglia delle proprietà di un oggetto nel progetto. Infine, è possibile inserire tramite le procedure guidate diverse. Per altre informazioni sull'uso di **delle proprietà** finestra e le procedure guidate diverse, vedere [Creating and Managing Visual C++ Projects](../ide/creating-and-managing-visual-cpp-projects.md).  
  
 Come prima, quando viene compilato il progetto, il compilatore analizza ogni file di origine C++, creando un file oggetto. Tuttavia, quando il compilatore rileva un attributo, viene analizzato e ne verifica la sintassi. Il compilatore chiama quindi in modo dinamico un provider di attributi per inserire il codice o apportare altre modifiche in fase di compilazione. L'implementazione del provider è diverso a seconda del tipo di attributo. Ad esempio, gli attributi relativi a ATL vengono implementati da Atlprov.  
  
 La figura seguente illustra la relazione tra il compilatore e il provider di attributi.  
  
 ![Comunicazione degli attributi Component](../windows/media/vccompattrcomm.gif "vcCompAttrComm")  
  
> [!NOTE]
>  Utilizzo dell'attributo non modifica il contenuto del file di origine. L'unica volta che il codice generato dall'attributo è visibile sia durante le sessioni di debug. Inoltre, per ogni file di origine nel progetto, è possibile generare un file di testo che visualizza i risultati della sostituzione attributo. Per altre informazioni su questa procedura, vedere [/Fx (Merge del codice)](../build/reference/fx-merge-injected-code.md) e [debug del codice inserito](/visualstudio/debugger/how-to-debug-injected-code).  
  
 Ad esempio la maggior parte dei costrutti C++, gli attributi hanno un set di caratteristiche che definisce il corretto utilizzo. Ciò viene definito il contesto dell'attributo e verrà risolto in una tabella di contesto per ogni argomento di riferimento di attributo. Ad esempio, il [coclasse](../windows/coclass.md) attributo può essere applicato solo a una classe esistente o una struttura, anziché il [cpp_quote](../windows/cpp-quote.md) attributo, che può essere inserito in un punto qualsiasi all'interno di un file di origine C++.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../windows/attributed-programming-concepts.md)