---
title: "Aggiunta guidata evento | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.event.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Aggiunta guidata evento [C++]"
ms.assetid: bdd2a7bb-13d5-44d7-abc9-e785ba4e05ce
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Aggiunta guidata evento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per aggiungere un evento a un progetto di controllo ActiveX MFC.  È possibile specificare l'evento, personalizzare un evento predefinito standard o selezionarlo da un elenco di eventi predefiniti.  
  
 **Nome evento**  
 Consente di specificare il nome utilizzato dai client di automazione per richiedere un evento dalla classe.  Immettere un nome o selezionarne uno dell'elenco.  
  
 **Tipo evento**  
 Indica il tipo di evento da aggiungere.  Disponibile solo se si seleziona dall'elenco **Nome evento**.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Predefinito**|Utilizzare questa opzione per specificare che per questa classe verrà implementato un evento predefinito, ad esempio il clic su un pulsante.  Gli eventi predefiniti sono definiti nella libreria MFC.|  
|**Personalizzato**|Utilizzare questa opzione per specificare che viene fornita un'implementazione personalizzata dell'evento.|  
  
 **Nome interno**  
 Consente di impostare il nome della funzione membro che invia l'evento.  Disponibile solo per gli eventi personalizzati.  Il nome si basa sul nome fornito in **Nome evento**.  È possibile modificare il nome interno per fornire un nome diverso da quello specificato in **Nome evento**.  
  
 **Tipo di parametro**  
 Consente di impostare il tipo per **Nome parametro**.  Selezionare il tipo desiderato dall'elenco.  
  
 **Nome parametro**  
 Consente di impostare il nome di un parametro da passare attraverso l'evento.  Dopo aver digitato il nome, scegliere **Aggiungi** per aggiungerlo all'elenco dei parametri.  
  
 Dopo avere scelto **Aggiungi**, il nome del parametro verrà visualizzato in **Elenco parametri**.  
  
> [!NOTE]
>  Se si specifica un nome di parametro e si fa clic su **Fine** senza prima fare clic su **Aggiungi**, il parametro non verrà aggiunto all'evento.  Sarà necessario individuare il metodo e inserire il parametro manualmente. **Elenco parametri**  
  
 **Aggiungi**  
 Consente di aggiungere a **Elenco parametri** il parametro specificato in **Nome parametro** e il relativo tipo.  Fare clic su **Aggiungi** per aggiungere un parametro all'elenco.  
  
 **Rimuovi**  
 Consente di rimuovere dall'elenco il parametro selezionato nella casella di riepilogo **Elenco parametri**.  
  
 **Elenco parametri**  
 Consente di visualizzare tutti i parametri e i relativi tipi attualmente aggiunti per il metodo.  Non appena si aggiungono i parametri, **Elenco parametri** viene aggiornato con ciascun parametro e il relativo tipo.  
  
## Vedere anche  
 [Aggiunta di un evento](../ide/adding-an-event-visual-cpp.md)