---
title: '#importare gli attributi (C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- '#import directive, attributes'
ms.assetid: 2a5085e3-82ee-4f83-892b-0aa6cc13863b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 76507ef9d840b9d3544442af2881810d715bd4ca
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="import-attributes-c"></a>Attributi #import (C++)
Fornisce collegamenti agli attributi utilizzati con la direttiva #import.  
  
 **Sezione specifica Microsoft**  
  
 Gli attributi seguenti sono disponibili nella direttiva #import.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[auto_rename](../preprocessor/auto-rename.md)|Rinomina parole riservate C++ aggiungendo due caratteri di sottolineatura (__) al nome della variabile per risolvere potenziali conflitti di nomi.|  
|[auto_search](../preprocessor/auto-search.md)|Specifica che, quando a una libreria dei tipi viene fatto riferimento tramite #import e tale libreria fa riferimento a un'altra libreria dei tipi, il compilatore può eseguire un'operazione #import implicita per un'altra libreria dei tipi.|  
|[embedded_idl](../preprocessor/embedded-idl.md)|Specifica che la libreria dei tipi è scritta nel file con estensione tlh con il codice generato dall'attributo mantenuto.|  
|[exclude](../preprocessor/exclude-hash-import.md)|Esclude gli elementi dai file di intestazione della libreria dei tipi generati.|  
|[high_method_prefix](../preprocessor/high-method-prefix.md)|Specifica un prefisso da utilizzare quando si assegna un nome alle proprietà e ai metodi di alto livello.|  
|[high_property_prefixes](../preprocessor/high-property-prefixes.md)|Specifica i prefissi alternativi per tre metodi della proprietà.|  
|[implementation_only](../preprocessor/implementation-only.md)|Elimina la generazione del file di intestazione con estensione tlh (file di intestazione primario).|  
|[include()](../preprocessor/include-parens.md)|Disabilita l'esclusione automatica.|  
|[inject_statement](../preprocessor/inject-statement.md)|Inserisce il proprio argomento come testo di origine nell'intestazione della libreria dei tipi.|  
|[named_guids](../preprocessor/named-guids.md)|Indica al compilatore di definire e inizializzare variabili GUID di vecchio stile, nel formato **LIBID_MyLib**, **CLSID_MyCoClass**, **IID_MyInterface**, e **DIID _MyDispInterface**.|  
|[no_auto_exclude](../preprocessor/no-auto-exclude.md)|Disabilita l'esclusione automatica.|  
|[no_dual_interfaces](../preprocessor/no-dual-interfaces.md)|Modifica il modo in cui il compilatore genera funzioni wrapper per i metodi di interfaccia duale.|  
|[no_implementation](../preprocessor/no-implementation.md)|Elimina la generazione dell'intestazione con estensione tli, contenente implementazioni delle funzioni membro wrapper.|  
|[no_namespace](../preprocessor/no-namespace.md)|Specifica che il nome dello spazio dei nomi non viene generato dal compilatore.|  
|[no_registry](../preprocessor/no-registry.md)|Indica al compilatore di non eseguire la ricerca di librerie dei tipi nel registro.|  
|[no_search_namespace](../preprocessor/no-search-namespace.md)|Ha la stessa funzionalità come il [no_namespace](../preprocessor/no-namespace.md) attributo ma viene usato in librerie dei tipi che si utilizza la direttiva #import con il [auto_search](../preprocessor/auto-search.md) attributo.|  
|[no_smart_pointers](../preprocessor/no-smart-pointers.md)|Elimina la creazione dei puntatori intelligenti per tutte le interfacce nella libreria dei tipi.|  
|[raw_dispinterfaces](../preprocessor/raw-dispinterfaces.md)|Indica al compilatore di generare funzioni wrapper di basso livello per le proprietà che chiamano e metodi di interfaccia dispatch **IDispatch:: Invoke** e restituire il `HRESULT` codice di errore.|  
|[raw_interfaces_only](../preprocessor/raw-interfaces-only.md)|Elimina la generazione di funzioni wrapper di gestione degli errori e [proprietà](../cpp/property-cpp.md) dichiarazioni che utilizzano le funzioni wrapper.|  
|[raw_method_prefix](../preprocessor/raw-method-prefix.md)|Specifica un prefisso diverso per evitare conflitti di nomi.|  
|[raw_native_types](../preprocessor/raw-native-types.md)|Disabilita l'utilizzo delle classi di supporto COM nelle funzioni wrapper di alto livello e applica l'utilizzo dei tipi di dati di basso livello.|  
|[raw_property_prefixes](../preprocessor/raw-property-prefixes.md)|Specifica i prefissi alternativi per tre metodi della proprietà.|  
|[rename](../preprocessor/rename-hash-import.md)|Risolve i problemi di conflitto di nomi.|  
|[rename_namespace](../preprocessor/rename-namespace.md)|Rinomina lo spazio dei nomi i cui è presente il contenuto della libreria dei tipi.|  
|[rename_search_namespace](../preprocessor/rename-search-namespace.md)|Ha la stessa funzionalità come il [rename_namespace](../preprocessor/rename-namespace.md) attributo ma viene usato in librerie dei tipi che si utilizza la direttiva #import con il [auto_search](../preprocessor/auto-search.md) attributo.|  
|[tlbid](../preprocessor/tlbid.md)|Consente di caricare librerie diverse dalla libreria dei tipi primaria.|  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)