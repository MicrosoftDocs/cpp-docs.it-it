---
title: "I nomi, aggiunta guidata proprietà | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.codewiz.prop.overview
dev_langs: C++
ms.assetid: 0453b7ea-89cb-41a1-80a2-d45f61589c0a
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9c1728dfda3ec29e8df2b7f5480e9bffb161da7f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="names-add-property-wizard"></a>Nomi, Aggiunta guidata proprietà
Utilizzare questa procedura guidata per aggiungere una proprietà a un'interfaccia.  
  
 **Tipo di proprietà**  
 Imposta il tipo di proprietà da aggiungere. Per le interfacce dispatch MFC, fornire un tipo personalizzato o selezionare dall'elenco predefinito. Se si fornisce un'implementazione predefinita di una proprietà, **tipo di proprietà** è impostata sul tipo predefinito e non sarà possibile modificare.  
  
 **Nome della proprietà**  
 Imposta il nome della proprietà. Per le interfacce dispatch MFC associate ai controlli ActiveX, è possibile fornire il proprio nome oppure è possibile selezionare un nome di proprietà predefinite dall'elenco predefinito. Se si fornisce un nome di proprietà, il **Stock** non è disponibile il tipo di implementazione. Vedere [proprietà predefinite](../ide/stock-properties.md) per una descrizione delle proprietà nell'elenco.  
  
|Tipo interfaccia|Descrizione|  
|--------------------|-----------------|  
|Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Specificare un nome di proprietà.|  
|Interfaccia dispatch MFC, interfaccia dispatch del controllo ActiveX MFC|Specificare un nome di proprietà o selezionare una proprietà predefinita dall'elenco. Se si seleziona una proprietà dall'elenco, il valore appropriato viene visualizzato il **tipo di proprietà** casella. È possibile modificare questo tipo, a seconda della selezione in **tipo di implementazione**.|  
  
 **Tipo restituito**  
 Solo le interfacce ATL. Imposta il tipo restituito per la proprietà. Per le interfacce duali, `HRESULT` è sempre il tipo restituito e questa casella è disponibile. Per le interfacce personalizzate, è possibile selezionare un tipo restituito dall'elenco. `HRESULT`è comunque consigliabile, perché fornisce un modo standard per restituire errori.  
  
 **Nome della variabile**  
 Solo dispatch MFC. Disponibile solo se si specificano **variabile membro** in **tipo di implementazione**. Imposta il nome della variabile membro a cui è associata la proprietà. Per impostazione predefinita, il nome della variabile è impostato su m _*PropertyName*. È possibile modificare questo nome.  
  
 **Funzione di notifica**  
 Solo dispatch MFC. Disponibile solo se si specificano **variabile membro** in **tipo di implementazione**. Imposta il nome dell'oggetto se chiamata funzione di notifica le modifiche alle proprietà. Per impostazione predefinita, il nome della funzione di notifica è impostato su*PropertyName*Changed. È possibile modificare questo nome.  
  
 **Get**  
 Per le interfacce dispatch MFC. Disponibile solo se si specificano **metodi Get/Set** in **tipo di implementazione**. Imposta il nome della funzione per ottenere la proprietà. Per impostazione predefinita, il nome della funzione Get è impostato su Get*PropertyName*. È possibile modificare questo nome. Se si elimina il nome, la funzione [GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported) viene inserito nella mappa di invio dell'interfaccia. Get*PropertyName* funzione specifica che la proprietà come leggibili.  
  
 **Set (funzione)**  
 Solo dispatch MFC. Disponibile solo se si specificano **metodi Get/Set** in **tipo di implementazione**. Imposta il nome della funzione per impostare la proprietà. Per impostazione predefinita, il nome della funzione Set è impostato a Set*PropertyName*. È possibile modificare questo nome. Se si elimina il nome, la funzione [SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported) viene inserito nella mappa di invio dell'interfaccia. Il Set di*PropertyName* funzione specifica che la proprietà è modificabile.  
  
 **Tipo di implementazione**  
 Solo dispatch MFC. Specifica la modalità implementare la proprietà da aggiungere.  
  
|Tipo di implementazione|Descrizione|  
|-------------------------|-----------------|  
|**Azionario**|Specifica un'implementazione predefinita per la proprietà selezionata **nome della proprietà**. Valore predefinito. Vedere [proprietà predefinite](../ide/stock-properties.md) per ulteriori informazioni.<br /><br /> Se si specifica **Stock**, quindi **tipo di proprietà**, **tipo di parametro**, e **nome del parametro** sono visualizzate in grigio.|  
|**Variabile membro**|Specifica che la proprietà viene aggiunta come una variabile membro. È possibile aggiungere proprietà personalizzate o la maggior parte delle proprietà predefinite come variabili membro. Non è possibile specificare **variabile membro** per **didascalia**, **hWnd**, e **testo** proprietà.<br /><br /> Fornisce nomi predefiniti in **nome di variabile** e **funzione notifica**. È possibile modificare questo nome.|  
|**Metodi Get/Set**|Specifica la proprietà viene aggiunta come Get*PropertyName* e impostare*PropertyName* funzioni, per impostazione predefinita. Questi nomi vengono visualizzati in **funzione Get** e **Set (funzione)**.<br /><br /> È possibile modificare il valore predefinito **tipo di proprietà**, che passa un valore per la funzione Get. È possibile specificare parametri per il **ottenere** e `Set` funzioni.|  
  
 **Get**  
 Per le interfacce ATL. Imposta la proprietà come leggibili; vale a dire, viene creato il **ottenere** metodo per il recupero di questa proprietà dall'oggetto. È necessario selezionare **ottenere**, `Put`, o entrambi.  
  
 **Put (funzione)**  
 Solo le interfacce ATL. Imposta la proprietà accessibile in scrittura; vale a dire, viene creato il `Put` metodo per l'impostazione o "inserimento", questa proprietà dell'oggetto. È necessario selezionare **ottenere**, `Put`, o entrambi. Se si seleziona questa opzione, è possibile scegliere da due modi per implementare il metodo seguenti:  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**PropPut**|Il [PropPut](../windows/propput.md) funzione restituisce una copia dell'oggetto. Questo è il valore predefinito e il modo più comune per impostare la proprietà accessibile in scrittura.|  
|**PropPutRef**|Il [PropPutRef](../windows/propputref.md) funzione restituisce un riferimento all'oggetto, anziché restituire la copia dell'oggetto stesso. È consigliabile utilizzare questa opzione per gli oggetti, ad esempio le strutture di grandi dimensioni o matrici, che potrebbero essere sovraccarico di inizializzazione.|  
  
 **Attributi dei parametri**  
 Solo le interfacce ATL. Imposta se il parametro specificato tramite **nome del parametro** è **in**, **out**, entrambi o nessuno.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**in**|Indica che il parametro viene passato dalla routine chiamante alla routine chiamata.|  
|**out**|Indica che il parametro del puntatore viene restituito dalla procedura chiamata alla routine chiamante (dal server al client).|  
  
 **Tipo di parametro**  
 Imposta il tipo di dati del parametro. Selezionare il tipo dall'elenco.  
  
 **Nome del parametro**  
 Imposta il nome di un parametro che si aggiunge per la proprietà, se la proprietà non ha parametri. Quando si fa clic su **Aggiungi**, viene visualizzato il nome di parametro **elenco parametri**.  
  
 **Elenco di parametri**  
 Visualizza l'elenco di attributi da aggiungere alla proprietà. Ogni elemento nell'elenco include il nome del parametro, tipo di parametro e gli attributi. Utilizzare **Aggiungi** e **rimuovere** per aggiornare l'elenco.  
  
 **Aggiungi**  
 Aggiunge il parametro specificato in **nome del parametro** e **tipo di parametro** per il **elenco parametri**. È necessario fare clic su **Aggiungi** per aggiungere un parametro all'elenco.  
  
 **Rimuovi**  
 Rimuove il parametro selezionato nella **elenco parametri**.  
  
 **Proprietà predefinita**  
 Solo interfaccia dispatch MFC. Imposta questa proprietà come il valore predefinito per l'interfaccia. Un'interfaccia può avere solo una proprietà predefinita; Dopo aver specificato la proprietà predefinita per le altre proprietà che si aggiunge l'interfaccia, questa casella è disponibile.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di una proprietà](../ide/adding-a-property-visual-cpp.md)   
 [Attributi IDL, aggiunta guidata proprietà](../ide/idl-attributes-add-property-wizard.md)   
 [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md)