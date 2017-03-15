---
title: "Attributi #import (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#import (direttiva), attributi"
ms.assetid: 2a5085e3-82ee-4f83-892b-0aa6cc13863b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Attributi #import (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fornisce collegamenti agli attributi utilizzati con la direttiva \#import.  
  
 **Sezione specifica Microsoft**  
  
 Gli attributi seguenti sono disponibili nella direttiva \#import.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[auto\_rename](../preprocessor/auto-rename.md)|Rinomina parole riservate C\+\+ aggiungendo due caratteri di sottolineatura \(\_\_\) al nome della variabile per risolvere potenziali conflitti di nomi.|  
|[auto\_search](../preprocessor/auto-search.md)|Specifica che, quando a una libreria dei tipi viene fatto riferimento tramite \#import e tale libreria fa riferimento a un'altra libreria dei tipi, il compilatore può eseguire un'operazione \#import implicita per un'altra libreria dei tipi.|  
|[embedded\_idl](../preprocessor/embedded-idl.md)|Specifica che la libreria dei tipi è scritta nel file con estensione tlh con il codice generato dall'attributo mantenuto.|  
|[exclude](../preprocessor/exclude-hash-import.md)|Esclude gli elementi dai file di intestazione della libreria dei tipi generati.|  
|[high\_method\_prefix](../preprocessor/high-method-prefix.md)|Specifica un prefisso da utilizzare quando si assegna un nome alle proprietà e ai metodi di alto livello.|  
|[high\_property\_prefixes](../preprocessor/high-property-prefixes.md)|Specifica i prefissi alternativi per tre metodi della proprietà.|  
|[implementation\_only](../preprocessor/implementation-only.md)|Elimina la generazione del file di intestazione con estensione tlh \(file di intestazione primario\).|  
|[include\(\)](../preprocessor/include-parens.md)|Disabilita l'esclusione automatica.|  
|[inject\_statement](../preprocessor/inject-statement.md)|Inserisce il proprio argomento come testo di origine nell'intestazione della libreria dei tipi.|  
|[named\_guids](../preprocessor/named-guids.md)|Indica al compilatore di definire e inizializzare variabili GUID di tipo obsoleto, di forma **LIBID\_MyLib**, **CLSID\_MyCoClass**, **IID\_MyInterface** e **DIID\_MyDispInterface**.|  
|[no\_auto\_exclude](../preprocessor/no-auto-exclude.md)|Disabilita l'esclusione automatica.|  
|[no\_dual\_interfaces](../preprocessor/no-dual-interfaces.md)|Modifica il modo in cui il compilatore genera funzioni wrapper per i metodi di interfaccia duale.|  
|[no\_implementation](../preprocessor/no-implementation.md)|Elimina la generazione dell'intestazione con estensione tli, contenente implementazioni delle funzioni membro wrapper.|  
|[no\_namespace](../preprocessor/no-namespace.md)|Specifica che il nome dello spazio dei nomi non viene generato dal compilatore.|  
|[no\_registry](../preprocessor/no-registry.md)|Indica al compilatore di non eseguire la ricerca di librerie dei tipi nel registro.|  
|[no\_search\_namespace](../preprocessor/no-search-namespace.md)|Ha la stessa funzionalità dell'attributo [no\_namespace](../preprocessor/no-namespace.md), ma viene utilizzato nelle librerie dei tipi utilizzate nella direttiva \#import con l'attributo [auto\_search](../preprocessor/auto-search.md).|  
|[no\_smart\_pointers](../preprocessor/no-smart-pointers.md)|Elimina la creazione dei puntatori intelligenti per tutte le interfacce nella libreria dei tipi.|  
|[raw\_dispinterfaces](../preprocessor/raw-dispinterfaces.md)|Indica al compilatore di generare funzioni wrapper di basso livello per le proprietà e i metodi di interfaccia dispatch che chiamano **IDispatch::Invoke** e restituiscono il codice di errore `HRESULT`.|  
|[raw\_interfaces\_only](../preprocessor/raw-interfaces-only.md)|Elimina la generazione di funzioni wrapper di gestione degli errori e di dichiarazioni [property](../cpp/property-cpp.md) che utilizzano tali funzioni.|  
|[raw\_method\_prefix](../preprocessor/raw-method-prefix.md)|Specifica un prefisso diverso per evitare conflitti di nomi.|  
|[raw\_native\_types](../preprocessor/raw-native-types.md)|Disabilita l'utilizzo delle classi di supporto COM nelle funzioni wrapper di alto livello e applica l'utilizzo dei tipi di dati di basso livello.|  
|[raw\_property\_prefixes](../preprocessor/raw-property-prefixes.md)|Specifica i prefissi alternativi per tre metodi della proprietà.|  
|[ridenominazione](../preprocessor/rename-hash-import.md)|Risolve i problemi di conflitto di nomi.|  
|[rename\_namespace](../preprocessor/rename-namespace.md)|Rinomina lo spazio dei nomi i cui è presente il contenuto della libreria dei tipi.|  
|[rename\_search\_namespace](../preprocessor/rename-search-namespace.md)|Ha la stessa funzionalità dell'attributo [rename\_namespace](../preprocessor/rename-namespace.md), ma viene utilizzato nelle librerie dei tipi utilizzate nella direttiva \#import con l'attributo [auto\_search](../preprocessor/auto-search.md).|  
|[tlbid](../preprocessor/tlbid.md)|Consente di caricare librerie diverse dalla libreria dei tipi primaria.|  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)