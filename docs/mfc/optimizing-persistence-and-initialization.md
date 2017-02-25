---
title: "Ottimizzazione di persistenza e inizializzazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC (controlli ActiveX), ottimizzazione"
  - "ottimizzazione, controlli ActiveX"
  - "ottimizzazione delle prestazioni, controlli ActiveX"
  - "prestazioni, controlli ActiveX"
ms.assetid: e821e19e-b9eb-49ab-b719-0743420ba80b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Ottimizzazione di persistenza e inizializzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per impostazione predefinita, la persistenza e l'inizializzazione di un controllo vengono gestite dalla funzione membro di `DoPropExchange`.  In un controllo comune, questa funzione contiene chiamate a diverse funzioni di **PX\_** \(`PX_Color`, `PX_Font`, e così via\), una per ogni proprietà.  
  
 Questo approccio offre il vantaggio che un'unica implementazione di `DoPropExchange` può essere utilizzata per l'inizializzazione, per la persistenza in formato binario e per la persistenza nel cosiddetto formato "del contenitore di proprietà" utilizzato da alcuni contenitori.  Questa funzione fornisce tutte le informazioni sulle proprietà e i relativi valori predefiniti in una posizione comoda.  
  
 Tuttavia, questa generale non a scapito di efficienza.  Le funzioni di **PX\_** ottenere la flessibilità con implementazioni a più livelli che sono implicitamente meno efficienti di più diretti, ma non il flessibili, approcci.  Inoltre, se un controllo passa un valore predefinito a una funzione di **PX\_**, quel valore predefinito è necessario specificare ogni volta, anche nelle situazioni in cui il valore predefinito non è necessariamente essere utilizzato.  Se il valore predefinito è un'attività complessa, ad esempio quando il valore viene ottenuto da una proprietà di ambiente\), il lavoro aggiuntivo e non viene eseguito nei casi in cui il valore predefinito non viene utilizzato.  
  
 È possibile migliorare le prestazioni del binario di persistenza del controllo mediante l'override della funzione di `Serialize` del controllo.  L'implementazione predefinita della funzione membro effettua una chiamata alla funzione di `DoPropExchange`.  Eseguire l'override del metodo, è possibile fornire un'implementazione più diretto per la persistenza binaria.  Ad esempio, si consideri la funzione di `DoPropExchange` :  
  
 [!code-cpp[NVC_MFC_AxOpt#1](../mfc/codesnippet/CPP/optimizing-persistence-and-initialization_1.cpp)]  
  
 Per migliorare le prestazioni di persistenza binaria del controllo, è possibile eseguire l'override della funzione di `Serialize` come segue:  
  
 [!code-cpp[NVC_MFC_AxOpt#2](../mfc/codesnippet/CPP/optimizing-persistence-and-initialization_2.cpp)]  
  
 La variabile locale di `dwVersion` può essere utilizzata per rilevare la versione dello stato persistente del controllo che viene caricato o salvato.  È possibile utilizzare questa variabile anziché chiamare [CPropExchange::GetVersion](../Topic/CPropExchange::GetVersion.md).  
  
 Per salvare un poco spazio nel formato persistente per una proprietà di **BOOL** \(e tenerla compatibile con il formato prodotto da `PX_Bool`\), è possibile archiviare la proprietà come **BYTE**, come segue:  
  
 [!code-cpp[NVC_MFC_AxOpt#3](../mfc/codesnippet/CPP/optimizing-persistence-and-initialization_3.cpp)]  
  
 Si noti che nel caso di caricamento, una variabile temporanea viene utilizzato quindi il valore viene assegnato, invece di eseguire il cast `m_boolProp` su un riferimento di **BYTE**.  La tecnica di cast comporterebbe un solo byte di `m_boolProp` modificato, lasciando i byte rimanenti non inizializzate.  
  
 Per lo stesso controllo, è possibile ottimizzare l'inizializzazione del controllo mediante l'override di [COleControl::OnResetState](../Topic/COleControl::OnResetState.md) come segue:  
  
 [!code-cpp[NVC_MFC_AxOpt#4](../mfc/codesnippet/CPP/optimizing-persistence-and-initialization_4.cpp)]  
  
 Sebbene `Serialize` e `OnResetState` siano stati ignorati, la funzione di `DoPropExchange` deve essere tenuta invariata in quanto è ancora utilizzata per la persistenza nel formato del contenitore di proprietà.  È importante gestire tutti e tre le di queste funzioni per assicurarsi che il controllo gestisce coerente le relative proprietà, indipendentemente dal meccanismo di persistenza il contenitore utilizza.  
  
## Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)