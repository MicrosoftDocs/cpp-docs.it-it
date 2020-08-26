---
title: Convenzioni di iostream
ms.date: 11/04/2016
helpviewer_keywords:
- iostream header
- C++ Standard Library, iostreams
ms.assetid: 9fe5ded0-37a1-48d1-9671-c81ffc4760ad
ms.openlocfilehash: 7bfc497ec7c55a611d29cd62d076c0ac2e9b6e9f
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845458"
---
# <a name="iostreams-conventions"></a>Convenzioni di iostream

Le intestazioni iostream supportano le conversioni tra testo e form codificati e input e output in file esterni:

[\<fstream>](../standard-library/fstream.md)\
[\<iomanip>](../standard-library/iomanip.md)\
[\<ios>](../standard-library/ios.md)\
[\<iosfwd>](../standard-library/iosfwd.md)\
[\<iostream>](../standard-library/iostream.md)\
[\<istream>](../standard-library/istream.md)\
[\<ostream>](../standard-library/ostream.md)\
[\<sstream>](../standard-library/sstream.md)\
[\<streambuf>](../standard-library/streambuf.md)\
[\<strstream>](../standard-library/strstream.md)

L'uso più semplice di iostreams richiede solo l'inclusione dell'intestazione [\<iostream>](../standard-library/iostream.md) . È possibile anche estrarre valori da [cin](../standard-library/iostream.md#cin) o [wcin](../standard-library/iostream.md#wcin) per leggere l'input standard. Le regole per eseguire questa operazione sono illustrate nella descrizione della classe [basic_istream Class](../standard-library/basic-istream-class.md). È possibile anche inserire valori in [cout](../standard-library/iostream.md#cout) o [wcout](../standard-library/iostream.md#wcout) per scrivere l'output standard. Le regole per eseguire questa operazione sono illustrate nella descrizione della classe [basic_ostream Class](../standard-library/basic-ostream-class.md). Il formato di controllo comune agli estrattori e agli inserimenti è gestito dalla classe [basic_ios Class](../standard-library/basic-ios-class.md). La modifica delle informazioni sul formato di modifica per l'estrazione e l'inserimento di oggetti è di esclusiva facoltà di specifici manipolatori.

È possibile eseguire le stesse operazioni iostreams sui file aperti in base al nome, usando le classi dichiarate in [\<fstream>](../standard-library/fstream.md) . Per eseguire la conversione tra iostreams e gli oggetti della classe [basic_string classe](../standard-library/basic-string-class.md), usare le classi dichiarate in [\<sstream>](../standard-library/sstream.md) . Per eseguire la stessa operazione con le stringhe C, usare le classi dichiarate in [\<strstream>](../standard-library/strstream.md) .

Le intestazioni rimanenti forniscono servizi di supporto, in genere di interesse solo per gli utenti esperti in classi iostream.

## <a name="see-also"></a>Vedere anche

[Panoramica della libreria standard C++](../standard-library/cpp-standard-library-overview.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
