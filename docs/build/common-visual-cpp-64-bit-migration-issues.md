---
description: 'Altre informazioni su: problemi comuni di migrazione a 64 bit Visual C++'
title: Problemi comuni relativi alla migrazione di Visual C++ a 64 bit
ms.date: 05/06/2019
helpviewer_keywords:
- 64-bit programming [C++], migration
- 64-bit compiler [C++], migration
- porting 32-bit code to 64-bit code
- migration [C++], 64-bit code issues
- 32-bit code porting [C++]
- 64-bit applications [C++]
- 64-bit compiler [C++], porting 32-bit code
- Win64 [C++]
ms.assetid: d17fb838-7513-4e2d-8b27-a1666f17ad76
ms.openlocfilehash: 86c4618423353a3a7ac217432ce9dfcb0c19061b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156892"
---
# <a name="common-visual-c-64-bit-migration-issues"></a>Problemi comuni relativi alla migrazione di Visual C++ a 64 bit

Quando si usa il compilatore Microsoft C++ (MSVC) per creare applicazioni da eseguire in un sistema operativo Windows a 64 bit, è necessario tenere presenti i seguenti problemi:

- **`int`** E **`long`** sono valori a 32 bit nei sistemi operativi Windows a 64 bit. Per i programmi che si prevede di compilare per le piattaforme a 64 bit, assicurarsi di non assegnare puntatori alle variabili a 32 bit. Nelle piattaforme a 64 bit i puntatori sono valori a 64 bit e, se vengono assegnati a una variabile a 32 bit, il valore del puntatore verrà troncato.

- `size_t`, `time_t` e `ptrdiff_t` sono valori a 64 bit nei sistemi operativi Windows a 64 bit.

- `time_t` è un valore a 32 bit nei sistemi operativi Windows a 32 bit in Visual Studio 2005 e versioni precedenti. `time_t` è ora un valore Integer a 64 bit per impostazione predefinita. Per ulteriori informazioni, vedere [gestione del tempo](../c-runtime-library/time-management.md).

   È necessario tenere presente che il codice accetta un **`int`** valore e lo elabora come `size_t` `time_t` valore o. È possibile che il numero aumenti di dimensioni maggiori di un numero a 32 bit e che i dati vengano troncati quando vengono passati di nuovo all' **`int`** archiviazione.

Il modificatore% x (formato esadecimale **`int`** ) `printf` non funzionerà come previsto in un sistema operativo Windows a 64 bit. Infatti, avrà effetto solo sui primi 32 bit del valore passato.

- Usare %I32x per visualizzare un tipo integrale a 32 bit in formato esadecimale.

- Usare %I64x per visualizzare un tipo integrale a 64 bit in formato esadecimale.

- Il modificatore %p (formato esadecimale di un puntatore) funziona nel modo previsto nei sistemi operativi Windows a 64 bit.

Per altre informazioni, vedere:

- [Opzioni del compilatore MSVC](reference/compiler-options.md)

- [Suggerimenti sulla migrazione](/windows/win32/WinProg64/migration-tips)

## <a name="see-also"></a>Vedi anche

[Configurare progetti C++ per destinazioni x64 a 64 bit](configuring-programs-for-64-bit-visual-cpp.md)<br/>
[Guida al porting e aggiornamento in Visual C++](../porting/visual-cpp-porting-and-upgrading-guide.md)
