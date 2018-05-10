---
title: Gli eventi di controllo predefinito | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Dialog editor, default control events
- controls [C++], default control events
- events [C++], controls
- dialog box controls, events
ms.assetid: 75556b23-18f5-4390-97a4-2ecad3309741
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a50b0deeb525481afb1da7221689924c41930bff
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="default-control-events"></a>Eventi di controllo predefiniti
I nomi di controllo seguenti sono associati agli eventi predefiniti:  
  
|Nome controllo|Evento predefinito|  
|------------------|-------------------|  
|Animazione|**MESSAGGIO ACN_START**|  
|Casella di controllo|**BN_CLICKED**|  
|Casella combinata|**CBN_SELCHANGE PROVENIENTE**|  
|Custom (Personalizzati)|**NOTIFICA TTN_GETDISPINFO**|  
|Selezione data e ora|**DTN_DATETIMECHANGE**|  
|Casella di modifica|**EN_CHANGE**|  
|Casella di gruppo|(Non applicabile)|  
|Tasto di scelta rapida|**NM_OUTOFMEMORY**|  
|Indirizzo IP|**IPN_FIELDCHANGED**|  
|List|**LVN_ITEMCHANGE**|  
|Casella di riepilogo|**LBN_SELCHANGE**|  
|Calendario mensile|**MCN_SELCHANGE**|  
|Controllo immagine|(Non applicabile)|  
|Stato|**NM_CUSTOMDRAW**|  
|Pulsante di comando|**BN_CLICKED**|  
|Pulsante di opzione|**BN_CLICKED**|  
|Rich edit|**EN_CHANGE**|  
|Barra di scorrimento|**NM_THEMECHANGED**|  
|Slider|**NM_CUSTOMDRAW**|  
|Selezione|**UDN_DELTAPOS**|  
|Testo statico|(Non applicabile)|  
|Scheda|**TCN_SELCHANGE**|  
|Tree|**TVN_SELCHANGE**|  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Definizione di variabili membro per i controlli di finestra di dialogo](../windows/defining-member-variables-for-dialog-controls.md)   
 [Tipi di messaggio associati a oggetti dell'interfaccia utente](../mfc/reference/message-types-associated-with-user-interface-objects.md)   
 [Modifica di un gestore di messaggi](../mfc/reference/editing-a-message-handler.md)   
 [Definizione di un gestore di messaggi per un messaggio riprodotto](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md)   
 [Dichiarazione di una variabile in base a una nuova classe di controlli](../mfc/reference/declaring-a-variable-based-on-your-new-control-class.md)   
 [Una funzione Virtual in override](../ide/overriding-a-virtual-function-visual-cpp.md)

