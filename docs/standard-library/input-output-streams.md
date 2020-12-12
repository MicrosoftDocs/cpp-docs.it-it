---
description: 'Altre informazioni su: flussi di input/output'
title: Flussi di Input-Output
ms.date: 11/04/2016
helpviewer_keywords:
- I/O [C++], stream
- stream I/O
ms.assetid: 21a97566-91a7-42d6-b2f8-a4c16bc926f1
ms.openlocfilehash: fd261bfdac5b9ce95b04430e9d77c6bd1df56c7d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97231641"
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

## <a name="see-also"></a>Vedi anche

[stringstream](../standard-library/basic-stringstream-class.md)\
[Classe basic_stringstream](../standard-library/basic-stringstream-class.md)\
[\<sstream>](../standard-library/sstream.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
