---
description: 'Altre informazioni su: Attributi #import (C++)'
title: '#Attributi import (C++)'
ms.date: 08/29/2019
helpviewer_keywords:
- '#import directive, attributes'
ms.assetid: 2a5085e3-82ee-4f83-892b-0aa6cc13863b
ms.openlocfilehash: 87719ba549efab4e0acf13d7e957c6841900d5fc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300451"
---
# <a name="import-attributes-c"></a>attributi di #import (C++)

Fornisce collegamenti agli attributi utilizzati con la `#import` direttiva.

**Specifico di Microsoft**

Gli attributi seguenti sono disponibili per la `#import` direttiva.

|Attributo|Descrizione|
|---------------|-----------------|
|[auto_rename](../preprocessor/auto-rename.md)|Rinomina parole riservate C++ aggiungendo due caratteri di sottolineatura (__) al nome della variabile per risolvere potenziali conflitti di nomi.|
|[auto_search](../preprocessor/auto-search.md)|Specifica che, quando a una libreria dei tipi viene fatto riferimento tramite #import e tale libreria fa riferimento a un'altra libreria dei tipi, il compilatore può eseguire un'operazione #import implicita per un'altra libreria dei tipi.|
|[embedded_idl](../preprocessor/embedded-idl.md)|Specifica che la libreria dei tipi è scritta nel file con estensione tlh con il codice generato dall'attributo mantenuto.|
|[escludere](../preprocessor/exclude-hash-import.md)|Esclude gli elementi dai file di intestazione della libreria dei tipi generati.|
|[high_method_prefix](../preprocessor/high-method-prefix.md)|Specifica un prefisso da utilizzare quando si assegna un nome alle proprietà e ai metodi di alto livello.|
|[high_property_prefixes](../preprocessor/high-property-prefixes.md)|Specifica i prefissi alternativi per tre metodi della proprietà.|
|[implementation_only](../preprocessor/implementation-only.md)|Elimina la generazione del file di intestazione con estensione tlh (file di intestazione primario).|
|[Includi ()](../preprocessor/include-parens.md)|Disabilita l'esclusione automatica.|
|[inject_statement](../preprocessor/inject-statement.md)|Inserisce il proprio argomento come testo di origine nell'intestazione della libreria dei tipi.|
|[named_guids](../preprocessor/named-guids.md)|Indica al compilatore di definire e inizializzare le variabili GUID in uno stile precedente, nel formato `LIBID_MyLib` ,, `CLSID_MyCoClass` `IID_MyInterface` e `DIID_MyDispInterface` .|
|[no_auto_exclude](../preprocessor/no-auto-exclude.md)|Disabilita l'esclusione automatica.|
|[no_dual_interfaces](../preprocessor/no-dual-interfaces.md)|Modifica il modo in cui il compilatore genera funzioni wrapper per i metodi di interfaccia duale.|
|[no_implementation](../preprocessor/no-implementation.md)|Elimina la generazione dell'intestazione con estensione tli, contenente implementazioni delle funzioni membro wrapper.|
|[no_namespace](../preprocessor/no-namespace.md)|Specifica che il nome dello spazio dei nomi non viene generato dal compilatore.|
|[no_registry](../preprocessor/no-registry.md)|Indica al compilatore di non eseguire la ricerca di librerie dei tipi nel registro.|
|[no_search_namespace](../preprocessor/no-search-namespace.md)|Ha la stessa funzionalità dell'attributo [no_namespace](../preprocessor/no-namespace.md) , ma viene usato nelle librerie dei tipi che usano la direttiva #import con l'attributo [auto_search](../preprocessor/auto-search.md) .|
|[no_smart_pointers](../preprocessor/no-smart-pointers.md)|Elimina la creazione dei puntatori intelligenti per tutte le interfacce nella libreria dei tipi.|
|[raw_dispinterfaces](../preprocessor/raw-dispinterfaces.md)|Indica al compilatore di generare funzioni wrapper di basso livello per le proprietà e i metodi dell'interfaccia dispatch che chiamano `IDispatch::Invoke` e restituiscono il codice di errore HRESULT.|
|[raw_interfaces_only](../preprocessor/raw-interfaces-only.md)|Evita la generazione di funzioni wrapper di gestione degli errori e di dichiarazioni di [Proprietà](../cpp/property-cpp.md) che utilizzano tali funzioni wrapper.|
|[raw_method_prefix](../preprocessor/raw-method-prefix.md)|Specifica un prefisso diverso per evitare conflitti di nomi.|
|[raw_native_types](../preprocessor/raw-native-types.md)|Disabilita l'utilizzo delle classi di supporto COM nelle funzioni wrapper di alto livello e applica l'utilizzo dei tipi di dati di basso livello.|
|[raw_property_prefixes](../preprocessor/raw-property-prefixes.md)|Specifica i prefissi alternativi per tre metodi della proprietà.|
|[rename](../preprocessor/rename-hash-import.md)|Risolve i problemi di conflitto di nomi.|
|[rename_namespace](../preprocessor/rename-namespace.md)|Rinomina lo spazio dei nomi i cui è presente il contenuto della libreria dei tipi.|
|[rename_search_namespace](../preprocessor/rename-search-namespace.md)|Ha la stessa funzionalità dell'attributo [rename_namespace](../preprocessor/rename-namespace.md) , ma viene usato nelle librerie dei tipi che usano la direttiva #import con l'attributo [auto_search](../preprocessor/auto-search.md) .|
|[tlbid](../preprocessor/tlbid.md)|Consente di caricare librerie diverse dalla libreria dei tipi primaria.|

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
