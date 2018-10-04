---
title: Attributi dei parametri (COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++/CLI], parameter attributes
- parameter attributes
ms.assetid: 024c2dd5-49d7-4ced-a17a-c56c1bc485b6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 160e71111a9080367390302a59c41a53580ffe0b
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791203"
---
# <a name="parameter-attributes"></a>Attributi dei parametri

Gli attributi seguenti si applicano ai parametri di un metodo in una classe o interfaccia.

|Attributo|Descrizione|
|---------------|-----------------|
|[custom](custom-cpp.md)|È possibile definire un attributo personalizzato.|
|[defaultvalue](defaultvalue.md)|Consente di specificare un valore predefinito per un parametro facoltativo tipizzato.|
|[first_is](first-is.md)|Specifica l'indice del primo elemento della matrice deve essere trasmesso.|
|[iid_is](iid-is.md)|Specifica l'indice del primo elemento della matrice deve essere trasmesso.|
|[immediatebind](immediatebind.md)|Indica che il database verrà immediatamente notificato tutte le modifiche apportate a una proprietà di un oggetto con associazione a dati.|
|[in](in-cpp.md)|Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.|
|[last_is](last-is.md)|Specifica l'indice dell'ultimo elemento di matrice deve essere trasmesso.|
|[lcid](lcid.md)|Consente di passare un identificatore delle impostazioni locali a una funzione.|
|[length_is](length-is.md)|Specifica il numero di elementi della matrice deve essere trasmesso.|
|[max_is](max-is.md)|Definisce il valore massimo per un indice di matrice valida.|
|[Facoltativo](optional-cpp.md)|Specifica un parametro facoltativo per una funzione membro.|
|[out](out-cpp.md)|Identifica i parametri dei puntatori restituiti dalla routine chiamata alla routine chiamante (dal server al client).|
|[Intervallo](range-cpp.md)|Specifica un intervallo di valori consentiti per gli argomenti o i campi i cui valori vengono impostati in fase di esecuzione.|
|[ref](ref-cpp.md)|Identifica un puntatore di riferimento.|
|[retval](retval.md)|Specifica il parametro che riceve il valore restituito del membro.|
|[satype](satype.md)|Specifica il tipo di dati di `SAFEARRAY` struttura.|
|[size_is](size-is.md)|Specifica le dimensioni della memoria allocata per i puntatori con dimensioni, ridimensionati i puntatori ai puntatori a dimensioni e unidimensionali o le matrici multidimensionali.|
|[unique](unique-cpp.md)|Specifica un puntatore univoco.|

## <a name="see-also"></a>Vedere anche

[Attributi per utilizzo](attributes-by-usage.md)