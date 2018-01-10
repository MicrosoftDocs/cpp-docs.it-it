---
title: Creazione di una nuova risorsa personalizzata o dati | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.editors.binary
dev_langs: C++
helpviewer_keywords:
- custom resources [C++]
- data resources [C++]
- resources [Visual Studio], creating
ms.assetid: 9918bf96-38fa-43a1-a384-572f95d84950
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: eb376bd640c5b56bfbe5a855f0df91a9a0cb6b7a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-a-new-custom-or-data-resource"></a>Creazione di una nuova risorsa personalizzata o di dati
È possibile creare una nuova risorsa personalizzata o di dati inserendo tale risorsa in un file separato usando la normale sintassi dei file di script delle risorse (RC), quindi includendo tale file facendo clic con il pulsante destro del mouse sul progetto in Esplora soluzioni e scegliendo **Inclusioni risorsa** dal menu di scelta rapida.  
  
### <a name="to-create-a-new-custom-or-data-resource"></a>Per creare una nuova risorsa personalizzata o di dati  
  
1. [Creare un file RC](../windows/how-to-create-a-resource-script-file.md) che contenga la risorsa personalizzata o di dati.  
  
     È possibile digitare dati personalizzati in un file RC sotto forma di stringhe con terminazione Null racchiuse tra virgolette o di numeri interi in formato decimale, esadecimale o ottale.  
  
2.  In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul file RC del progetto e scegliere **Inclusioni risorsa** nel menu di scelta rapida.  
  
3.  Nella casella **Direttive in fase di compilazione** digitare un'istruzione **#include** con il nome del file che contiene la risorsa personalizzata. Ad esempio:  
  
 ```  
    #include mydata.rc  
 ```  
  
     Assicurarsi che le informazioni digitate siano corrette dal punto di vista sintattico e ortografico. Il contenuto della casella **Direttive in fase di compilazione** viene inserito nel file di script della risorsa esattamente nel modo in cui viene digitato.  
  
4.  Fare clic su **OK** per registrare le modifiche.  
  
 Un altro metodo per creare una risorsa personalizzata consiste nell'importare un file esterno come risorsa personalizzata. Per altre informazioni, vedere [Importazione ed esportazione di risorse](../windows/how-to-import-and-export-resources.md).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Binary Editor](binary-editor.md)

