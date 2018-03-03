---
title: Aggiunta guidata evento | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.event.overview
dev_langs:
- C++
helpviewer_keywords:
- Add Event Wizard [C++]
ms.assetid: bdd2a7bb-13d5-44d7-abc9-e785ba4e05ce
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 62ecbe7dece323ce5e99fbe32b3b936fe3661362
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="add-event-wizard"></a>Aggiunta guidata evento
Questa procedura guidata aggiunge un evento a un progetto controllo ActiveX MFC. È possibile specificare un evento personalizzato, è possibile personalizzare un evento in genere predefinito oppure è possibile selezionare da un elenco di eventi predefiniti.  
  
 **Nome dell'evento**  
 Imposta il nome usato dai client di automazione per richiedere un evento dalla classe. Immettere un nome o selezionarne uno dall'elenco.  
  
 **Tipo di evento**  
 Indica il tipo di evento da aggiungere. Disponibile solo se si seleziona dal **nome evento** elenco.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Azionario**|Specifica che un evento predefinito, ad esempio un pulsante, viene implementato per questa classe. Eventi predefiniti sono definiti nella libreria Microsoft Foundation classe (MFC).|  
|**Personalizzato**|Specifica che si fornisce un'implementazione personalizzata dell'evento.|  
  
 **Nome interno**  
 Imposta il nome della funzione membro che invia l'evento. Disponibile solo per eventi personalizzati. Il nome è basato sul **nome evento**. Se si desidera specificare un nome diverso, è possibile modificare il nome interno **nome evento**.  
  
 **Tipo di parametro**  
 Imposta il tipo per il **nome del parametro**. Selezionare il tipo dall'elenco.  
  
 **Nome del parametro**  
 Imposta il nome di un parametro da passare attraverso l'evento. Dopo aver digitato il nome, è necessario fare clic su **Aggiungi** per aggiungerlo all'elenco dei parametri.  
  
 Quando si fa clic su **Aggiungi**, viene visualizzato il nome di parametro **elenco parametri**.  
  
> [!NOTE]
>  Se si specifica un nome di parametro e quindi fare clic su **fine** prima di scegliere **Aggiungi**, il parametro non viene aggiunto all'evento. È necessario trovare il metodo e inserire il parametro manualmente. **Elenco di parametri**  
  
 **Aggiungi**  
 Aggiunge il parametro specificato in **nome del parametro**e il relativo tipo, a **elenco parametri**. È necessario fare clic su **Aggiungi** per aggiungere un parametro all'elenco.  
  
 **Rimuovi**  
 Rimuove il parametro selezionato nella **elenco parametri** dall'elenco.  
  
 **Elenco di parametri**  
 Visualizza tutti i parametri e i tipi aggiunti per il metodo. Quando si aggiungono parametri, la procedura guidata Aggiorna **elenco parametri** per visualizzare ogni parametro con il relativo tipo.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di un evento](../ide/adding-an-event-visual-cpp.md)