---
title: 'Procedura: compilare componenti COM senza registrazione | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: COM components, registration-free
ms.assetid: 7e585d6a-0314-45b2-8f1b-cae9ac4df037
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 018a3ba707f4c5cff73b5a5c54f82400a79a8d46
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-build-registration-free-com-components"></a>Procedura: compilare componenti COM senza registrazione
I componenti COM senza registrazione sono componenti COM che contengono manifesti incorporati nelle DLL.  
  
### <a name="to-build-manifests-into-com-components"></a>Per generare manifesti nei componenti COM  
  
1.  Aprire le pagine delle proprietà di progetto per il componente COM.  
  
2.  Espandere il **le proprietà di configurazione** nodo, quindi espandere il **strumento manifesto** nodo.  
  
3.  Selezionare il **di Input e Output** pagina delle proprietà e quindi impostare il **Incorpora manifesto** proprietà è uguale a **Sì**.  
  
4.  Fare clic su **OK**.  
  
5.  Compilare la soluzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Applicazioni isolate](http://msdn.microsoft.com/library/aa375190)   
 [Informazioni sugli assembly Side-by-Side](http://msdn.microsoft.com/library/ff951640)   
 [Procedura: Compilare applicazioni isolate per l'utilizzo di componenti COM](../build/how-to-build-isolated-applications-to-consume-com-components.md)