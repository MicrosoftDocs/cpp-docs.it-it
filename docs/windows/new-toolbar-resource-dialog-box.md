---
title: Finestra di dialogo Nuova risorsa barra degli strumenti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.newtoolbarresource
dev_langs:
- C++
helpviewer_keywords:
- New Toolbar Resource dialog box
ms.assetid: 52dd01ad-e748-4ab2-b3eb-59f5df990ca6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2024e9ea69bed58f679456bae6f0c566de6b99f9
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39604105"
---
# <a name="new-toolbar-resource-dialog-box"></a>Nuova risorsa barra degli strumenti (finestra di dialogo)
La finestra di dialogo Nuova risorsa barra degli strumenti consente di specificare la larghezza e altezza dei pulsanti che si aggiunge a una risorsa barra degli strumenti. Il valore predefinito è 16 x 15 pixel.  
  
 Una mappa di bit viene usata per creare una barra degli strumenti ha una larghezza massima di 2048. Pertanto, se si imposta la **larghezza del pulsante** a 512, è possibile avere solo quattro pulsanti. Se si imposta la larghezza su 513, si possono avere solo tre pulsanti.  
  
 **Larghezza del pulsante**  
 Fornisce uno spazio per l'utente a immettere la larghezza dei pulsanti della barra degli strumenti che è effettuata la conversione da una risorsa della bitmap a una risorsa barra degli strumenti. Le immagini vengono ritagliate alla larghezza e altezza specificata e i colori vengono regolati per usare i colori della barra degli strumenti standard (16 colori).  
  
 **Altezza del pulsante**  
 Fornisce uno spazio per poter immettere l'altezza dei pulsanti della barra degli strumenti che è effettuata la conversione da una risorsa della bitmap a una risorsa barra degli strumenti. Le immagini vengono ritagliate alla larghezza e altezza specificata e i colori vengono regolati per usare i colori della barra degli strumenti standard (16 colori).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 MFC o ATL  
  
## <a name="see-also"></a>Vedere anche  
 [Proprietà dei pulsanti della barra degli strumenti](../windows/toolbar-button-properties.md)   
 [Conversione di bitmap in barre degli strumenti](../windows/converting-bitmaps-to-toolbars.md)   
 [Editor barra degli strumenti](../windows/toolbar-editor.md)