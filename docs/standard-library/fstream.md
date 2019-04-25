---
title: '&lt;fstream&gt;'
ms.date: 11/04/2016
f1_keywords:
- <fstream>
helpviewer_keywords:
- fstream header
ms.assetid: 660de351-0489-41df-b239-40e0cdcab46b
ms.openlocfilehash: 20efdc755b7f706fc6ee962daa32bd352df39d45
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62159769"
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
|[filebuf](../standard-library/fstream-typedefs.md#filebuf)|Un tipo `basic_filebuf` specializzato su **char** i parametri del modello.|
|[fstream](../standard-library/fstream-typedefs.md#fstream)|Un tipo `basic_fstream` specializzato su **char** i parametri del modello.|
|[ifstream](../standard-library/fstream-typedefs.md#ifstream)|Un tipo `basic_ifstream` specializzato su **char** i parametri del modello.|
|[ofstream](../standard-library/fstream-typedefs.md#ofstream)|Un tipo `basic_ofstream` specializzato su **char** i parametri del modello.|
|[wfstream](../standard-library/fstream-typedefs.md#wfstream)|Un tipo `basic_fstream` specializzato su **wchar_t** i parametri del modello.|
|[wifstream](../standard-library/fstream-typedefs.md#wifstream)|Un tipo `basic_ifstream` specializzato su **wchar_t** i parametri del modello.|
|[wofstream](../standard-library/fstream-typedefs.md#wofstream)|Un tipo `basic_ofstream` specializzato su **wchar_t** i parametri del modello.|
|[wfilebuf](../standard-library/fstream-typedefs.md#wfilebuf)|Un tipo `basic_filebuf` specializzato su **wchar_t** i parametri del modello.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[basic_filebuf](../standard-library/basic-filebuf-class.md)|La classe modello descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`, verso e da una sequenza di elementi archiviati in un file esterno.|
|[basic_fstream](../standard-library/basic-fstream-class.md)|La classe modello descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer del flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**,  **TR**>, con elementi di tipo `Elem`, cui tratti di carattere sono determinati dalla classe `Tr`.|
|[basic_ifstream](../standard-library/basic-ifstream-class.md)|La classe modello descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**, **Tr**>, con elementi di tipo `Elem`, cui tratti di carattere sono determinati dalla classe `Tr`.|
|[basic_ofstream](../standard-library/basic-ofstream-class.md)|La classe modello descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**, **Tr**>, con elementi di tipo `Elem`, cui tratti di carattere sono determinati dalla classe `Tr`.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
