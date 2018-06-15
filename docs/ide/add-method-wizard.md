---
title: Aggiunta guidata metodo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.method.overview
dev_langs:
- C++
helpviewer_keywords:
- Add Method Wizard [C++]
- methods [C++], adding using wizards
ms.assetid: b9a71b0e-9ecf-40fa-9f86-4200cb23d671
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cc2ebd18640f0ab778cb45252691e63206861d53
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33340346"
---
# <a name="add-method-wizard"></a>Aggiunta guidata metodo
Usare questa procedura guidata per aggiungere un metodo a un'interfaccia. La procedura guidata visualizza opzioni diverse, a seconda del tipo di progetto o del tipo di interfaccia a cui viene aggiunto un metodo.  
  
## <a name="names"></a>Nomi  
 **Tipo restituito**  
 Tipo di dati restituito dal metodo. `HRESULT` è consigliato per tutti i tipi di interfaccia poiché offre un modo standard per restituire errori.  
  
|Tipo interfaccia|Descrizione|  
|--------------------|-----------------|  
|Interfaccia duale|`HRESULT`. Non modificabile.|  
|Interfaccia personalizzata|`HRESULT`. Non modificabile.|  
|Interfaccia personalizzata locale|Specificare un tipo restituito personalizzato o selezionarlo dall'elenco.|  
|Interfaccia dispatch|Specificare un tipo restituito personalizzato o selezionarlo dall'elenco.|  
|Interfaccia dispatch del controllo ActiveX MFC|Se si implementa un metodo predefinito, il tipo restituito è impostato sul valore appropriato e non può essere modificato. Se si seleziona un metodo dall'elenco **Nome metodo** e si fa clic su **Personalizzato** in **Selezionare il tipo di metodo**, selezionare un tipo restituito dall'elenco.|  
  
 **Nome metodo**  
 Imposta il nome per il metodo.  
  
|Tipo interfaccia|Descrizione|  
|--------------------|-----------------|  
|Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Specificare il nome del metodo.|  
|Interfaccia dispatch MFC|Specificare il nome del metodo o selezionare un nome di metodo suggerito dall'elenco. Se si seleziona un nome dall'elenco, il valore appropriato viene visualizzato nella casella **Tipo restituito** e non è modificabile.|  
|Interfaccia dispatch del controllo ActiveX MFC|Specificare un metodo oppure selezionare uno dei metodi predefiniti [DoClick](../mfc/reference/colecontrol-class.md#doclick) e [Refresh](../mfc/reference/colecontrol-class.md#refresh). Per altre informazioni, vedere [Controlli ActiveX MFC: aggiunta di metodi predefiniti](../mfc/mfc-activex-controls-adding-stock-methods.md).|  
  
 **Tipo di metodo**  
 Disponibile solo per i controlli ActiveX MFC. Se si specifica un nome di metodo nella casella **Nome metodo** anziché selezionare un metodo dall'elenco, questa casella non è disponibile.  
  
 Se si seleziona uno dei metodi dell'elenco **Nome metodo**, selezionare l'implementazione predefinita o un'implementazione personalizzata.  
  
|Tipo di metodo|Descrizione|  
|-----------------|-----------------|  
|**Predefinito**|Valore predefinito. Inserisce l'implementazione predefinita del metodo selezionato nell'elenco **Nome metodo**. **Tipo restituito** non può essere modificato se si seleziona **Predefinito**.|  
|**Personalizzato**|Inserisce un'implementazione stub del metodo selezionato nell'elenco **Nome metodo**. Per i tipi di metodo personalizzati, è possibile specificare il tipo restituito o selezionarne uno dall'elenco **Tipo restituito**.|  
  
 **Nome interno**  
 Disponibile solo per i metodi personalizzati aggiunti a un'interfaccia dispatch MFC. Imposta il nome usato nella mappa di invio, il file di intestazione (con estensione h) e il file di implementazione (con estensione cpp). Per impostazione predefinita, il nome corrisponde a **Nome metodo**. È possibile modificare il nome del metodo se si usa un'interfaccia dispatch MFC o se si aggiunge un metodo personalizzato a un'interfaccia dispatch del controllo ActiveX MFC.  
  
|Tipo interfaccia|Descrizione|  
|--------------------|-----------------|  
|Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Non disponibile|  
|Interfaccia dispatch MFC|Impostare il nome del metodo per impostazione predefinita. È possibile modificare il nome interno.|  
|Interfaccia dispatch del controllo ActiveX MFC|È possibile impostare il nome interno solo per i metodi personalizzati. I metodi predefiniti non usano un nome interno.|  
  
 **Attributi dei parametri**  
 Imposta attributi aggiuntivi per il parametro specificato in **Nome parametro**.  
  
|Attributo del parametro|Descrizione|Combinazioni consentite|  
|-------------------------|-----------------|--------------------------|  
|**In**|Indica che il parametro viene passato dalla routine chiamante alla routine chiamata.|Solo **in**<br /><br /> **in** e **out**|  
|**Out**|Indica che il parametro del puntatore viene restituito dalla routine chiamata alla routine chiamante (dal server al client).|Solo **out**<br /><br /> **in** e **out**<br /><br /> **out** e **retval**|  
|**Retval**|Indica che il parametro riceve il valore restituito del membro.|**retval** e out|  
  
 **Tipo parametro**  
 Imposta il tipo di dati del parametro. Selezionare il tipo dall'elenco.  
  
 **Nome parametro**  
 Imposta il nome di un parametro da passare al metodo. Dopo aver digitato il nome, è necessario fare clic su **Aggiungi** per aggiungerlo all'elenco dei parametri che verranno passati al metodo. Se non si specifica un nome di parametro, la procedura guidata ignora gli attributi dei parametri (solo ATL) o le selezioni di **Tipo parametro**.  
  
 Dopo aver fatto clic su **Aggiungi**, il nome del parametro viene visualizzato nell'**Elenco parametri**.  
  
 **Nota** Se si specifica un nome di parametro e quindi si fa clic su **Fine** prima di fare clic su **Aggiungi**, il parametro non viene aggiunto al metodo. È necessario trovare il metodo e inserire il parametro manualmente.  
  
 **Aggiungi**  
 Aggiunge il parametro specificato in **Nome parametro** e il tipo e gli attributi dei parametri all'**Elenco parametri**. È necessario fare clic su **Aggiungi** per aggiungere un parametro all'elenco.  
  
 **Rimuovi**  
 Rimuove il parametro selezionato nell'**Elenco parametri** dall'elenco.  
  
 **Elenco parametri**  
 Visualizza tutti i parametri e i relativi modificatori e tipi aggiunti per il metodo. Quando si aggiungono i parametri, la procedura guidata aggiorna l'**Elenco parametri** in modo da visualizzare ogni parametro con il relativo modificatore e tipo.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di un metodo](../ide/adding-a-method-visual-cpp.md)   
 [Attributi IDL, Aggiunta guidata metodo](../ide/idl-attributes-add-method-wizard.md)