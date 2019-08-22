---
title: Convenzioni di iostream
ms.date: 11/04/2016
helpviewer_keywords:
- iostream header
- C++ Standard Library, iostreams
ms.assetid: 9fe5ded0-37a1-48d1-9671-c81ffc4760ad
ms.openlocfilehash: 222a65f60b231ba4b3768131c15d6e0d736f211e
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68449009"
---
# <a name="iostreams-conventions"></a>Convenzioni di iostream

Le intestazioni iostream supportano le conversioni tra testo e form codificati e input e output in file esterni:

|||
|-|-|
|[\<fstream>](../standard-library/fstream.md)|[\<iomanip>](../standard-library/iomanip.md)|
|[\<ios>](../standard-library/ios.md)|[\<iosfwd>](../standard-library/iosfwd.md)|
|[\<iostream>](../standard-library/iostream.md)|[\<istream>](../standard-library/istream.md)|
|[\<ostream>](../standard-library/ostream.md)|[\<sstream>](../standard-library/sstream.md)|
|[\<streambuf>](../standard-library/streambuf.md)|[\<strstream>](../standard-library/strstream.md)|

L'utilizzo più semplice di iostream prevede di includere solo l'intestazione [\<iostream>](../standard-library/iostream.md). È possibile anche estrarre valori da [cin](../standard-library/iostream.md#cin) o [wcin](../standard-library/iostream.md#wcin) per leggere l'input standard. Le regole per eseguire questa operazione sono illustrate nella descrizione della classe [basic_istream Class](../standard-library/basic-istream-class.md). È possibile anche inserire valori in [cout](../standard-library/iostream.md#cout) o [wcout](../standard-library/iostream.md#wcout) per scrivere l'output standard. Le regole per eseguire questa operazione sono illustrate nella descrizione della classe [basic_ostream Class](../standard-library/basic-ostream-class.md). Il formato di controllo comune agli estrattori e agli inserimenti è gestito dalla classe [basic_ios Class](../standard-library/basic-ios-class.md). La modifica delle informazioni sul formato di modifica per l'estrazione e l'inserimento di oggetti è di esclusiva facoltà di specifici manipolatori.

Usando le classi dichiarate in [\<fstream>](../standard-library/fstream.md), è possibile eseguire le stesse operazioni iostream nei file aperti in base al nome. Per eseguire la conversione tra oggetti iostream e oggetti della classe [basic_string Class](../standard-library/basic-string-class.md), è possibile usare le classi dichiarate in [\<sstream>](../standard-library/sstream.md). Per effettuare questa operazione con le stringhe C, è possibile usare le classi dichiarate in [\<strstream>](../standard-library/strstream.md).

Le intestazioni rimanenti forniscono servizi di supporto, in genere di interesse solo per gli utenti esperti in classi iostream.

## <a name="see-also"></a>Vedere anche

[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
