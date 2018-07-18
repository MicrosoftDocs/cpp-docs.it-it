---
title: Flussi di input/output | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- I/O [C++], stream
- stream I/O
ms.assetid: 21a97566-91a7-42d6-b2f8-a4c16bc926f1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dcb17eeaf09cec63392cb842f790504b28038487
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38955722"
---
# <a name="inputoutput-streams"></a>Flussi di input/output

`basic_iostream`, che è definito nel file di intestazione \<istream>, è il modello di classe per gli oggetti che gestiscono i flussi di I/O basati su caratteri sia di input che di output.

I typedef che definiscono le specializzazioni di `basic_iostream` specifiche dei caratteri sono due e consentono di creare codice più leggibile: `iostream` (da non confondere con il file di intestazione \<iostream>) è un flusso di I/O basato su `basic_iostream<char>`, mentre `wiostream` è un flusso di /O basato su `basic_iostream<wchar_t>`.

Per altre informazioni, vedere [Classe basic_iostream](../standard-library/basic-iostream-class.md), [iostream](../standard-library/basic-iostream-class.md) e [wiostream](../standard-library/basic-iostream-class.md).

Da `basic_iostream` deriva il modello di classe `basic_fstream`, che viene usato per trasmettere sotto forma di flusso i dati di tipo carattere da e verso i file.

Sono disponibili anche typedef che forniscono specializzazioni di `basic_fstream` specifiche dei caratteri. Si trovano `fstream`, ovvero un flusso dei / o file base **char**, e `wfstream`, che è un flusso dei / o file base **wchar_t**. Per altre informazioni, vedere [Classe basic_fstream](../standard-library/basic-fstream-class.md), [fstream](../standard-library/basic-fstream-class.md) e [wfstream](../standard-library/basic-fstream-class.md). L'uso di questi typedef richiede l'inclusione del file di intestazione \<fstream>.

> [!NOTE]
> Quando per eseguire l'I/O di file viene usato un oggetto `basic_fstream`, anche se il buffer sottostante contiene posizioni designate separatamente per la lettura e la scrittura, le posizioni di input e output correnti sono collegate tra loro, pertanto la lettura di alcuni dati sposta la posizione di output.

Il modello di classe `basic_stringstream` e la relativa specializzazione comune, `stringstream`, vengono spesso usati per gestire gli oggetti di flusso di I/O allo scopo di inserire ed estrarre dati di tipo carattere. Per altre informazioni, vedere [Classe basic_stringstream](../standard-library/basic-stringstream-class.md).

## <a name="see-also"></a>Vedere anche

[stringstream](../standard-library/basic-stringstream-class.md)<br/>
[Classe basic_stringstream](../standard-library/basic-stringstream-class.md)<br/>
[\<sstream>](../standard-library/sstream.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
