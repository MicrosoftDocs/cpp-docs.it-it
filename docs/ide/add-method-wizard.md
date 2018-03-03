---
title: Aggiunta guidata metodo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.method.overview
dev_langs:
- C++
helpviewer_keywords:
- Add Method Wizard [C++]
- methods [C++], adding using wizards
ms.assetid: b9a71b0e-9ecf-40fa-9f86-4200cb23d671
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 63595fe7fda434b7ee16161bd3afdaf8a46fad82
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="add-method-wizard"></a>Aggiunta guidata metodo
Utilizzare questa procedura guidata per aggiungere un metodo su un'interfaccia. A seconda del tipo di progetto o un tipo di interfaccia a cui si sta aggiungendo un metodo, la procedura guidata consente di visualizzare diverse opzioni.  
  
## <a name="names"></a>Nomi  
 **Tipo restituito**  
 Il tipo di dati restituito dal metodo. `HRESULT`è consigliabile per tutti i tipi di interfaccia, perché fornisce un modo standard per restituire errori.  
  
|Tipo interfaccia|Descrizione|  
|--------------------|-----------------|  
|Interfaccia duale|`HRESULT`. Non sarà possibile modificarla.|  
|Interfaccia personalizzata|`HRESULT`. Non sarà possibile modificarla.|  
|Interfaccia personalizzata locale|Specificare un tipo restituito personalizzato o selezionare dall'elenco.|  
|Interfaccia dispatch|Specificare un tipo restituito personalizzato o selezionare dall'elenco.|  
|Interfaccia dispatch del controllo ActiveX MFC|Se si implementa un metodo, il tipo restituito è impostato sul valore appropriato e non può essere modificato. Se si seleziona un metodo di **nome del metodo** elenco e fare clic su **personalizzato** in **selezionare il tipo di metodo**, selezionare un tipo restituito dall'elenco.|  
  
 **Nome del metodo**  
 Imposta il nome del metodo.  
  
|Tipo interfaccia|Descrizione|  
|--------------------|-----------------|  
|Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Fornire il proprio nome di metodo.|  
|Interfaccia dispatch MFC|Fornire il proprio nome di metodo o selezionare un nome di metodo suggerito dall'elenco. Se si seleziona un nome dall'elenco, il valore appropriato viene visualizzato il **tipo restituito** casella e non è modificabile.|  
|Interfaccia dispatch del controllo ActiveX MFC|Fornire una propria oppure selezionare uno dei metodi predefiniti [DoClick](../mfc/reference/colecontrol-class.md#doclick) e [aggiornamento](../mfc/reference/colecontrol-class.md#refresh). Vedere [controlli ActiveX MFC: aggiunta di metodi predefiniti](../mfc/mfc-activex-controls-adding-stock-methods.md) per ulteriori informazioni.|  
  
 **Tipo di metodo**  
 Questa opzione è disponibile solo per i controlli ActiveX MFC. Se si specifica un nome di metodo nel **nome del metodo** casella, invece di selezionare un metodo dall'elenco, questa casella è disponibile.  
  
 Se si seleziona uno dei metodi di **nome del metodo** , selezionare l'implementazione predefinita o un'implementazione personalizzata.  
  
|Tipo di metodo|Descrizione|  
|-----------------|-----------------|  
|**Azionario**|Valore predefinito. Inserisce l'implementazione predefinita del metodo in cui si seleziona il **nome del metodo** elenco. **Tipo restituito** non può essere modificato se si seleziona **Stock**.|  
|**Personalizzato**|Inserisce un'implementazione stub del metodo selezionato nella **nome del metodo** elenco. Per i tipi di metodi personalizzati, è possibile fornire un tipo restituito personalizzato o selezionarne uno dal **tipo restituito** elenco.|  
  
 **Nome interno**  
 È disponibile per solo i metodi personalizzati aggiunti a un'interfaccia dispatch MFC. Imposta il nome utilizzato nella mappa di invio, il file di intestazione (h) e il file di implementazione (. cpp). Per impostazione predefinita, questo nome è identico **nome del metodo**. Se si sta utilizzando un'interfaccia dispatch MFC o se si sta aggiungendo un metodo personalizzato a un'interfaccia dispatch del controllo ActiveX MFC, è possibile modificare il nome del metodo.  
  
|Tipo interfaccia|Descrizione|  
|--------------------|-----------------|  
|Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Non disponibile|  
|Interfaccia dispatch MFC|Per impostazione predefinita, impostare il nome del metodo. È possibile modificare il nome interno.|  
|Interfaccia dispatch del controllo ActiveX MFC|È possibile impostare il nome interno solo per i metodi personalizzati. Metodi predefiniti non utilizzano un nome interno.|  
  
 **Attributi dei parametri**  
 Imposta attributi aggiuntivi per il parametro specificato **nome del parametro**.  
  
|Attributo di parametro|Descrizione|Combinazioni consentite|  
|-------------------------|-----------------|--------------------------|  
|**In**|Indica che il parametro viene passato dalla routine chiamante alla routine chiamata.|**in** solo<br /><br /> **in** e **out**|  
|**Out**|Indica che il parametro del puntatore viene restituito dalla procedura chiamata alla routine chiamante (dal server al client).|**out** solo<br /><br /> **in** e **out**<br /><br /> **out** e **retval**|  
|**Retval**|Indica che il parametro riceve il valore restituito del membro.|**retval** e out|  
  
 **Tipo di parametro**  
 Imposta il tipo di dati del parametro. Selezionare il tipo dall'elenco.  
  
 **Nome del parametro**  
 Imposta il nome di un parametro da passare attraverso il metodo. Dopo aver digitato il nome, è necessario fare clic su **Aggiungi** per aggiungerlo all'elenco di parametri che verranno passati attraverso il metodo. Se non si specifica un nome di parametro, la procedura guidata ignora gli attributi di parametro (solo ATL) o **tipo di parametro** selezioni.  
  
 Quando si fa clic su **Aggiungi**, viene visualizzato il nome di parametro **elenco parametri**.  
  
 **Nota** se si specifica un nome di parametro e quindi fare clic su **fine** prima di scegliere **Aggiungi**, il parametro non viene aggiunto al metodo. È necessario trovare il metodo e inserire il parametro manualmente.  
  
 **Aggiungi**  
 Aggiunge il parametro specificato in **nome del parametro**e i relativi attributi di tipo e un parametro, per **elenco parametri**. È necessario fare clic su **Aggiungi** per aggiungere un parametro all'elenco.  
  
 **Rimuovi**  
 Rimuove il parametro selezionato nella **elenco parametri** dall'elenco.  
  
 **Elenco di parametri**  
 Visualizza tutti i parametri e ai modificatori e i tipi aggiunti per il metodo. Quando si aggiungono parametri, la procedura guidata Aggiorna **elenco parametri** per visualizzare ogni parametro, con il modificatore e il tipo.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di un metodo](../ide/adding-a-method-visual-cpp.md)   
 [Attributi IDL, Aggiunta guidata metodo](../ide/idl-attributes-add-method-wizard.md)