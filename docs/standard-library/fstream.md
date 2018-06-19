---
title: '&lt;fstream&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- <fstream>
dev_langs:
- C++
helpviewer_keywords:
- fstream header
ms.assetid: 660de351-0489-41df-b239-40e0cdcab46b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3d2fa3ef6113add6bcf72f85f74b8722033cb8d5
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33846610"
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
|[filebuf](../standard-library/fstream-typedefs.md#filebuf)|Tipo `basic_filebuf` specializzato nei parametri di modello `char`.|
|[fstream](../standard-library/fstream-typedefs.md#fstream)|Tipo `basic_fstream` specializzato nei parametri di modello `char`.|
|[ifstream](../standard-library/fstream-typedefs.md#ifstream)|Tipo `basic_ifstream` specializzato nei parametri di modello `char`.|
|[ofstream](../standard-library/fstream-typedefs.md#ofstream)|Tipo `basic_ofstream` specializzato nei parametri di modello `char`.|
|[wfstream](../standard-library/fstream-typedefs.md#wfstream)|Tipo `basic_fstream` specializzato nei parametri di modello `wchar_t`.|
|[wifstream](../standard-library/fstream-typedefs.md#wifstream)|Tipo `basic_ifstream` specializzato nei parametri di modello `wchar_t`.|
|[wofstream](../standard-library/fstream-typedefs.md#wofstream)|Tipo `basic_ofstream` specializzato nei parametri di modello `wchar_t`.|
|[wfilebuf](../standard-library/fstream-typedefs.md#wfilebuf)|Tipo `basic_filebuf` specializzato nei parametri di modello `wchar_t`.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[basic_filebuf](../standard-library/basic-filebuf-class.md)|La classe modello descrive un buffer di flusso che controlla la trasmissione di elementi di tipo **Elem**, i cui tratti di carattere sono determinati dalla classe **Tr**, verso e da una sequenza di elementi archiviata in un file esterno.|
|[basic_fstream](../standard-library/basic-fstream-class.md)|La classe modello descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati mediante un buffer di flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**, **Tr**>, con elementi di tipo **Elem**, i cui tratti di carattere sono determinati dalla classe **Tr**.|
|[basic_ifstream](../standard-library/basic-ifstream-class.md)|La classe modello descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**, **Tr**>, con elementi di tipo **Elem**, i cui tratti di carattere sono determinati dalla classe **Tr**.|
|[basic_ofstream](../standard-library/basic-ofstream-class.md)|La classe modello descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso della classe [basic_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**, **Tr**>, con elementi di tipo **Elem**, i cui tratti di carattere sono determinati dalla classe **Tr**.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
