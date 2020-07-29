---
title: Flussi di input/output
ms.date: 11/04/2016
helpviewer_keywords:
- I/O [C++], stream
- stream I/O
ms.assetid: 21a97566-91a7-42d6-b2f8-a4c16bc926f1
ms.openlocfilehash: 54b53f96d487e466106fe92a01affa7bd3e55c16
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228258"
---
# <a name="inputoutput-streams"></a>Flussi di input/output

`basic_iostream`, definito nel file di intestazione \<istream> , è il modello di classe per gli oggetti che gestiscono flussi I/O basati su caratteri di input e output.

Sono presenti due typedef che definiscono specializzazioni specifiche dei caratteri di `basic_iostream` e possono semplificare la lettura del codice: `iostream` (da non confondere con il file di intestazione \<iostream> ) è un flusso di i/o basato su `basic_iostream<char>` ; `wiostream` è un flusso di i/o basato su `basic_iostream<wchar_t>` .

Per altre informazioni, vedere [Classe basic_iostream](../standard-library/basic-iostream-class.md), [iostream](../standard-library/basic-iostream-class.md) e [wiostream](../standard-library/basic-iostream-class.md).

Da `basic_iostream` deriva il modello di classe `basic_fstream`, che viene usato per trasmettere sotto forma di flusso i dati di tipo carattere da e verso i file.

Sono disponibili anche typedef che forniscono specializzazioni di `basic_fstream` specifiche dei caratteri. Sono `fstream` , ovvero un flusso di i/o di file basato su **`char`** , e `wfstream` , che è un flusso di i/o di file basato su **`wchar_t`** . Per altre informazioni, vedere [Classe basic_fstream](../standard-library/basic-fstream-class.md), [fstream](../standard-library/basic-fstream-class.md) e [wfstream](../standard-library/basic-fstream-class.md). L'uso di questi typedef richiede l'inclusione del file di intestazione \<fstream> .

> [!NOTE]
> Quando per eseguire l'I/O di file viene usato un oggetto `basic_fstream`, anche se il buffer sottostante contiene posizioni designate separatamente per la lettura e la scrittura, le posizioni di input e output correnti sono collegate tra loro, pertanto la lettura di alcuni dati sposta la posizione di output.

Il modello di classe `basic_stringstream` e la relativa specializzazione comune, `stringstream`, vengono spesso usati per gestire gli oggetti di flusso di I/O allo scopo di inserire ed estrarre dati di tipo carattere. Per altre informazioni, vedere [Classe basic_stringstream](../standard-library/basic-stringstream-class.md).

## <a name="see-also"></a>Vedere anche

[stringstream](../standard-library/basic-stringstream-class.md)\
[Classe basic_stringstream](../standard-library/basic-stringstream-class.md)\
[\<sstream>](../standard-library/sstream.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
