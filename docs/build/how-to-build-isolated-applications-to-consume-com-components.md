---
title: "Procedura: compilare applicazioni isolate per l'utilizzo di componenti COM | Microsoft Docs"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- isolated applications [C++]
ms.assetid: 04587547-1174-44ab-bd99-1292358fba20
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1b94a41aef1122a507a8966c475b9a87c69e3789
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43196832"
---
# <a name="how-to-build-isolated-applications-to-consume-com-components"></a>Procedura: compilare applicazioni isolate per l'utilizzo di componenti COM
Applicazioni isolate sono applicazioni che contengono manifesti generati nel programma. È possibile creare applicazioni isolate per l'utilizzo di componenti COM.  
  
### <a name="to-add-com-references-to-manifests-of-isolated-applications"></a>Per aggiungere riferimenti COM da manifesti di applicazioni isolate  
  
1.  Aprire le pagine delle proprietà di progetto per l'applicazione di tipo isolato.  
  
2.  Espandere la **le proprietà di configurazione** nodo, quindi espandere il **strumento manifesto** nodo.  
  
3.  Selezionare il **COM isolato** pagina delle proprietà e quindi impostare il **nome File componente** proprietà sul nome del componente COM che si desidera che l'applicazione di tipo isolato può usare.  
  
4.  Fare clic su **OK**.  
  
### <a name="to-build-manifests-into-isolated-applications"></a>Per creare i manifesti nelle applicazioni isolate  
  
1.  Aprire le pagine delle proprietà di progetto per l'applicazione di tipo isolato.  
  
2.  Espandere la **le proprietà di configurazione** nodo, quindi espandere il **strumento manifesto** nodo.  
  
3.  Selezionare il **di Input e Output** pagina delle proprietà e quindi impostare il **Incorpora manifesto** uguale alla proprietà **Sì**.  
  
4.  Fare clic su **OK**.  
  
5.  Compilare la soluzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Applicazioni isolate](/windows/desktop/SbsCs/isolated-applications)   
 [Informazioni sugli assembly Side-by-Side](/windows/desktop/SbsCs/about-side-by-side-assemblies-)