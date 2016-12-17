---
title: "Controlli ActiveX MFC: serializzazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_wVerMinor"
  - "DoPropExchange"
  - "_wVerMajor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DoPropExchange (metodo)"
  - "ExchangeVersion (metodo)"
  - "GetVersion (metodo)"
  - "MFC (controlli ActiveX), serializzazione"
  - "MFC (controlli ActiveX), supporto della versione"
  - "controllo delle versioni dei controlli ActiveX"
  - "wVerMajor (costante globale)"
  - "wVerMinor (costante globale)"
ms.assetid: 9d57c290-dd8c-4853-b552-6f17f15ebedd
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli ActiveX MFC: serializzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come serializzare un controllo ActiveX.  La serializzazione è il processo di lettura o scrittura di su un supporto di archivio permanente, ad esempio un file su disco.  La libreria MFC \(Microsoft Foundation Class \(MFC\) fornisce il supporto incorporato per la serializzazione nella classe `CObject`.  `COleControl` estende il supporto ai controlli ActiveX utilizzando un meccanismo di scambio di proprietà.  
  
 La serializzazione dei controlli ActiveX viene implementata eseguendo l'override di [COleControl::DoPropExchange](../Topic/COleControl::DoPropExchange.md).  Questa funzione, denominata durante il caricamento e il salvataggio dell'oggetto controllo, archivia tutte le proprietà implementate con una variabile membro o una variabile membro con la notifica di modifica.  
  
 Negli argomenti riportati i passaggi principali relativi a serializzare un controllo ActiveX:  
  
-   Implementare funzione di `DoPropExchange` per serializzare l'oggetto controllo  
  
-   [Personalizzare il processo di serializzazione](#_core_customizing_the_default_behavior_of_dopropexchange)  
  
-   [Implementazione del supporto delle versioni](#_core_implementing_version_support)  
  
##  <a name="_core_implementing_the_dopropexchange_function"></a> Implementazione della funzione di DoPropExchange  
 Quando si utilizza la Creazione guidata controllo ActiveX per generare il progetto di controllo, molte funzioni di gestione predefinite vengono aggiunti automaticamente alla classe del controllo, inclusa l'implementazione predefinita di [COleControl::DoPropExchange](../Topic/COleControl::DoPropExchange.md).  Nell'esempio seguente viene illustrato il codice aggiunto alle classi creati con la Creazione guidata controllo ActiveX:  
  
 [!code-cpp[NVC_MFC_AxUI#43](../mfc/codesnippet/CPP/mfc-activex-controls-serializing_1.cpp)]  
  
 Se si desidera rendere persistente una proprietà, modificare `DoPropExchange` aggiungendo una chiamata alla funzione swap di proprietà.  Il seguente esempio viene illustrata la serializzazione di una proprietà booleana personalizzata di CircleShape, in cui la proprietà di CircleShape ha un valore predefinito di **TRUE**:  
  
 [!code-cpp[NVC_MFC_AxSer#1](../mfc/codesnippet/CPP/mfc-activex-controls-serializing_2.cpp)]  
[!code-cpp[NVC_MFC_AxSer#2](../mfc/codesnippet/CPP/mfc-activex-controls-serializing_3.cpp)]  
  
 Nella tabella seguente sono elencate le funzioni in termini di scambio di proprietà è possibile utilizzare per serializzare le proprietà del controllo:  
  
|Funzioni di scambio di proprietà|Scopo|  
|--------------------------------------|-----------|  
|**PX\_Blob\( \)**|Serializza una proprietà data model \(BLOB\) dell'oggetto binario di grandi dimensioni dei tipi.|  
|**PX\_Bool\( \)**|Serializza una proprietà booleana del tipo.|  
|**PX\_Color\( \)**|Serializza una proprietà color del tipo.|  
|**PX\_Currency\( \)**|Serializza una proprietà di **CY** di tipo \(valuta.|  
|**PX\_Double\( \)**|Serializza una proprietà di **Double** del tipo.|  
|**PX\_Font\( \)**|Serializza una proprietà del carattere.|  
|**PX\_Float\( \)**|Serializza una proprietà di **mobile** del tipo.|  
|**PX\_IUnknown\( \)**|Serializza una proprietà di tipo `LPUNKNOWN`.|  
|**PX\_Long\( \)**|Serializza una proprietà di **long** del tipo.|  
|**PX\_Picture\( \)**|Serializza una proprietà di un'immagine del tipo.|  
|**PX\_Short\( \)**|Serializza una proprietà di **short** del tipo.|  
|**PX\_String\( \)**|Serializza una proprietà di `CString` del tipo.|  
|**PX\_ULong\( \)**|Serializza una proprietà di **ULONG** del tipo.|  
|**PX\_UShort\( \)**|Serializza una proprietà di **USHORT** del tipo.|  
  
 Per ulteriori informazioni su queste funzioni di scambio di proprietà, vedere [Persistenza dei controlli OLE](../mfc/reference/persistence-of-ole-controls.md) nel *Riferimento MFC*  
  
##  <a name="_core_customizing_the_default_behavior_of_dopropexchange"></a> Personalizzare il comportamento predefinito di DoPropExchange  
 L'implementazione predefinita di **DoPropertyExchange** \(come illustrato nell'argomento precedente\) effettua una chiamata a classe base `COleControl`.  Si serializza un insieme di proprietà automaticamente supportati da `COleControl`, che utilizza più spazio di archiviazione che la serializzazione solo le proprietà personalizzate del controllo.  Rimuovere questa chiamata consente all'oggetto serializzare solo le proprietà considerate importante.  Una proprietà predefinita indica il controllo ha implementato non verrà serializzata quando viene salvato oppure caricandolo l'oggetto controllo a meno che in modo esplicito aggiungere le richieste di **PX\_** essi.  
  
##  <a name="_core_implementing_version_support"></a> Implementazione del supporto delle versioni  
 Il supporto delle versioni consente a un controllo ActiveX rivisto per aggiungere nuove proprietà persistenti e si può individuare e caricare lo stato persistente creato in una versione precedente del controllo.  Per rendere la versione di un controllo come parte dei dati persistenti, chiamare [COleControl::ExchangeVersion](../Topic/COleControl::ExchangeVersion.md) nella funzione di `DoPropExchange` del controllo.  Questa chiamata viene automaticamente inserita se il controllo ActiveX è stato creato mediante la Creazione guidata controllo ActiveX.  Può essere rimossa se il supporto delle versioni non è necessario.  Tuttavia, il costo delle dimensioni del controllo è molto breve \(4 byte\) per la flessibilità aggiunta del supporto delle versioni fornisce.  
  
 Se il controllo non è stato creato con la Creazione guidata controllo ActiveX, aggiungere una chiamata a `COleControl::ExchangeVersion` inserendo la seguente riga all'inizio della funzione di `DoPropExchange` \(prima della chiamata a `COleControl::DoPropExchange`\):  
  
 [!code-cpp[NVC_MFC_AxSer#1](../mfc/codesnippet/CPP/mfc-activex-controls-serializing_2.cpp)]  
[!code-cpp[NVC_MFC_AxSer#3](../mfc/codesnippet/CPP/mfc-activex-controls-serializing_4.cpp)]  
  
 È possibile utilizzare qualsiasi `DWORD` come numero di versione.  Progetti generati dall'utilizzo **\_wVerMinor** e **\_wVerMajor** di Creazione guidata controllo ActiveX come predefinito.  Queste costanti globali sono definite nel file di implementazione di classi di controlli ActiveX del progetto.  Nel resto della funzione di `DoPropExchange`, è possibile chiamare [CPropExchange::GetVersion](../Topic/CPropExchange::GetVersion.md) in qualsiasi momento per recuperare la versione che si sta salvando o che recuperano.  
  
 Nell'esempio seguente, controllare la versione 1 del controllo di esempio è presente una sola proprietà "di ReleaseDate".  La versione 2 viene aggiunta una proprietà "di OriginalDate".  Se il controllo è responsabile per caricare lo stato persistente dalla versione precedente, inizializza la variabile membro per la nuova proprietà su un valore predefinito.  
  
 [!code-cpp[NVC_MFC_AxSer#4](../mfc/codesnippet/CPP/mfc-activex-controls-serializing_5.cpp)]  
[!code-cpp[NVC_MFC_AxSer#3](../mfc/codesnippet/CPP/mfc-activex-controls-serializing_4.cpp)]  
  
 Per impostazione predefinita, un controllo "" converte i dati obsoleti nell'ultimo formato.  Ad esempio, se la versione 2 di un controllo carica i dati salvati dalla versione 1, scriverà il formato della versione 2 quando viene salvato nuovamente.  Se si desidera che il controllo per salvare i dati in formato lettura per ultimo, passare **FALSE** come terzo parametro quando si chiamano `ExchangeVersion`.  Il terzo parametro è facoltativo ed è **TRUE** per impostazione predefinita.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)