---
title: 'Procedura: compilare applicazioni isolate per l''utilizzo di componenti COM | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: isolated applications [C++]
ms.assetid: 04587547-1174-44ab-bd99-1292358fba20
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: aaeef56f122d10f983313ab1c839db40f4e92aa4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-build-isolated-applications-to-consume-com-components"></a>Procedura: compilare applicazioni isolate per l'utilizzo di componenti COM
Applicazioni isolate sono applicazioni che contengono manifesti incorporati nel programma. È possibile creare applicazioni isolate per l'utilizzo di componenti COM.  
  
### <a name="to-add-com-references-to-manifests-of-isolated-applications"></a>Per aggiungere riferimenti COM a manifesti di applicazioni isolate  
  
1.  Aprire le pagine delle proprietà di progetto per l'applicazione di tipo isolato.  
  
2.  Espandere il **le proprietà di configurazione** nodo, quindi espandere il **strumento manifesto** nodo.  
  
3.  Selezionare il **COM isolato** pagina delle proprietà e quindi impostare il **nome File componente** proprietà sul nome del componente COM che si desidera utilizzare l'applicazione isolato.  
  
4.  Fare clic su **OK**.  
  
### <a name="to-build-manifests-into-isolated-applications"></a>Per generare i manifesti in applicazioni isolate  
  
1.  Aprire le pagine delle proprietà di progetto per l'applicazione di tipo isolato.  
  
2.  Espandere il **le proprietà di configurazione** nodo, quindi espandere il **strumento manifesto** nodo.  
  
3.  Selezionare il **di Input e Output** pagina delle proprietà e quindi impostare il **Incorpora manifesto** proprietà è uguale a **Sì**.  
  
4.  Fare clic su **OK**.  
  
5.  Compilare la soluzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Applicazioni isolate](http://msdn.microsoft.com/library/aa375190)   
 [Informazioni sugli assembly Side-by-Side](http://msdn.microsoft.com/library/ff951640)