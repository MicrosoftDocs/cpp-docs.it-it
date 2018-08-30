---
title: 'Procedura: compilare componenti COM senza registrazione | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- COM components, registration-free
ms.assetid: 7e585d6a-0314-45b2-8f1b-cae9ac4df037
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1eaf9417f4d2b3b825933589556055772b84e057
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43197413"
---
# <a name="how-to-build-registration-free-com-components"></a>Procedura: compilare componenti COM senza registrazione
I componenti COM senza registrazione sono i componenti COM che dispongono di manifesti incorporati nelle DLL.  
  
### <a name="to-build-manifests-into-com-components"></a>Per generare manifesti nei componenti COM  
  
1.  Aprire le pagine delle proprietà di progetto per il componente COM.  
  
2.  Espandere la **le proprietà di configurazione** nodo, quindi espandere il **strumento manifesto** nodo.  
  
3.  Selezionare il **di Input e Output** pagina delle proprietà e quindi impostare il **Incorpora manifesto** uguale alla proprietà **Sì**.  
  
4.  Fare clic su **OK**.  
  
5.  Compilare la soluzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Applicazioni isolate](/windows/desktop/SbsCs/isolated-applications)   
 [Informazioni sugli assembly Side-by-Side](/windows/desktop/SbsCs/about-side-by-side-assemblies-)   
 [Procedura: Compilare applicazioni isolate per l'utilizzo di componenti COM](../build/how-to-build-isolated-applications-to-consume-com-components.md)