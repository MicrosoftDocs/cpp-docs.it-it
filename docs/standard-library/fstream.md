---
description: 'Altre informazioni su: &lt; fstream&gt;'
title: '&lt;fstream&gt;'
ms.date: 11/04/2016
f1_keywords:
- <fstream>
helpviewer_keywords:
- fstream header
ms.assetid: 660de351-0489-41df-b239-40e0cdcab46b
ms.openlocfilehash: 98fe18306d50a9d6f1f8a360d4d29b6e865f6328
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324265"
---
# <a name="ltfstreamgt"></a>&lt;fstream&gt;

Definisce diverse classi che supportano operazioni iostream su sequenze archiviate in file esterni.

## <a name="syntax"></a>Sintassi

```cpp
#include <fstream>
```

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[filebuf](../standard-library/fstream-typedefs.md#filebuf)|Tipo `basic_filebuf` specializzato nei **`char`** parametri di modello.|
|[fstream](../standard-library/fstream-typedefs.md#fstream)|Tipo `basic_fstream` specializzato nei **`char`** parametri di modello.|
|[ifstream](../standard-library/fstream-typedefs.md#ifstream)|Tipo `basic_ifstream` specializzato nei **`char`** parametri di modello.|
|[ofstream](../standard-library/fstream-typedefs.md#ofstream)|Tipo `basic_ofstream` specializzato nei **`char`** parametri di modello.|
|[wfstream](../standard-library/fstream-typedefs.md#wfstream)|Tipo `basic_fstream` specializzato nei **`wchar_t`** parametri di modello.|
|[wifstream](../standard-library/fstream-typedefs.md#wifstream)|Tipo `basic_ifstream` specializzato nei **`wchar_t`** parametri di modello.|
|[wofstream](../standard-library/fstream-typedefs.md#wofstream)|Tipo `basic_ofstream` specializzato nei **`wchar_t`** parametri di modello.|
|[wfilebuf](../standard-library/fstream-typedefs.md#wfilebuf)|Tipo `basic_filebuf` specializzato nei **`wchar_t`** parametri di modello.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[basic_filebuf](../standard-library/basic-filebuf-class.md)|Il modello di classe descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `Elem` , i cui tratti di carattere sono determinati dalla classe `Tr` , verso e da una sequenza di elementi archiviati in un file esterno.|
|[basic_fstream](../standard-library/basic-fstream-class.md)|Il modello di classe descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer di flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md) \<**Elem**, **Tr**> , con elementi di tipo `Elem` , i cui tratti di carattere sono determinati dalla classe `Tr` .|
|[basic_ifstream](../standard-library/basic-ifstream-class.md)|Il modello di classe descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md) \<**Elem**, **Tr**> , con elementi di tipo `Elem` , i cui tratti di carattere sono determinati dalla classe `Tr` .|
|[basic_ofstream](../standard-library/basic-ofstream-class.md)|Il modello di classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md) \<**Elem**, **Tr**> , con elementi di tipo `Elem` , i cui tratti di carattere sono determinati dalla classe `Tr` .|

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
