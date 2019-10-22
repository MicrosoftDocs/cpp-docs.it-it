---
title: '&lt;fstream&gt;'
ms.date: 11/04/2016
f1_keywords:
- <fstream>
helpviewer_keywords:
- fstream header
ms.assetid: 660de351-0489-41df-b239-40e0cdcab46b
ms.openlocfilehash: 1f85367b9ae527c9387d085acc1496bfbbf7cc9e
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72688032"
---
# <a name="ltfstreamgt"></a>&lt;fstream&gt;

Definisce diverse classi che supportano operazioni iostream su sequenze archiviate in file esterni.

## <a name="syntax"></a>Sintassi

```cpp
#include <fstream>
```

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[filebuf](../standard-library/fstream-typedefs.md#filebuf)|Tipo `basic_filebuf` specializzato sui parametri del modello **char** .|
|[fstream](../standard-library/fstream-typedefs.md#fstream)|Tipo `basic_fstream` specializzato sui parametri del modello **char** .|
|[ifstream](../standard-library/fstream-typedefs.md#ifstream)|Tipo `basic_ifstream` specializzato sui parametri del modello **char** .|
|[ofstream](../standard-library/fstream-typedefs.md#ofstream)|Tipo `basic_ofstream` specializzato sui parametri del modello **char** .|
|[wfstream](../standard-library/fstream-typedefs.md#wfstream)|Tipo `basic_fstream` specializzato sui parametri del modello **wchar_t** .|
|[wifstream](../standard-library/fstream-typedefs.md#wifstream)|Tipo `basic_ifstream` specializzato sui parametri del modello **wchar_t** .|
|[wofstream](../standard-library/fstream-typedefs.md#wofstream)|Tipo `basic_ofstream` specializzato sui parametri del modello **wchar_t** .|
|[wfilebuf](../standard-library/fstream-typedefs.md#wfilebuf)|Tipo `basic_filebuf` specializzato sui parametri del modello **wchar_t** .|

### <a name="classes"></a>Classi

|Class|Descrizione|
|-|-|
|[basic_filebuf](../standard-library/basic-filebuf-class.md)|Il modello di classe descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`, verso e da una sequenza di elementi archiviati in un file esterno.|
|[basic_fstream](../standard-library/basic-fstream-class.md)|Il modello di classe descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer di flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md) \<**Elem**, **TR**>, con elementi di tipo `Elem`, il cui carattere i tratti sono determinati dalla classe `Tr`.|
|[basic_ifstream](../standard-library/basic-ifstream-class.md)|Il modello di classe descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md) \<**Elem**, **TR**>, con elementi di tipo `Elem`, i cui tratti di carattere sono determinato dalla classe `Tr`.|
|[basic_ofstream](../standard-library/basic-ofstream-class.md)|Il modello di classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md) \<**Elem**, **TR**>, con elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
