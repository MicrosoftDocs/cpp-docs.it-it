---
title: "Proprietà dei pulsanti della barra degli strumenti | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- size, toolbar buttons
- toolbar buttons (in Toolbar editor), setting properties
- Toolbar editor, toolbar button properties
- status bars, active toolbar button text
- command IDs, toolbar buttons
- width, toolbar buttons
ms.assetid: b2705814-7c5d-4f24-8f77-07559b0cdda2
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5e179cd400b0b8bcc621a7c69a4814eab098fbaa
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="toolbar-button-properties"></a>Proprietà dei pulsanti delle barre degli strumenti
Le proprietà di un pulsante della barra degli strumenti sono:  
  
|Proprietà|Descrizione|  
|--------------|-----------------|  
|**ID**|Definisce l'ID del pulsante. L'elenco di riepilogo a discesa include comuni **ID** nomi.|  
|**Larghezza**|Imposta la larghezza del pulsante. è consigliabile 16 pixel.|  
|**Altezza**|Imposta l'altezza del pulsante. Si noti che l'altezza di un pulsante Modifica l'altezza di tutti i pulsanti sulla barra degli strumenti. è consigliabile 15 pixel.|  
|**Prompt**|Definisce il messaggio visualizzato nella barra di stato. \N e un nome si aggiunge una descrizione comandi al pulsante della barra degli strumenti. Per ulteriori informazioni, vedere [la creazione di una descrizione comando](../windows/creating-a-tool-tip-for-a-toolbar-button.md).|  
  
 **Larghezza** e **altezza** si applicano a tutti i pulsanti. Bitmap che viene utilizzata per creare una barra degli strumenti ha una larghezza massima di 2048. Pertanto, se si imposta la larghezza del pulsante a 512, può avere solo quattro pulsanti e se si imposta la larghezza su 513, può avere solo tre pulsanti.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 MFC o ATL  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica delle proprietà di un pulsante della barra degli strumenti](../windows/changing-the-properties-of-a-toolbar-button.md)   
 [Editor barra degli strumenti](../windows/toolbar-editor.md)

