---
description: 'Altre informazioni su: modificatori specifici Microsoft'
title: Modificatori specifici Microsoft
ms.date: 08/16/2018
ms.assetid: 22c7178c-f854-47fa-9de6-07d23fda58e1
ms.openlocfilehash: dd82bf22da99e864a7b4898da1a99a12c3ad3de4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97161624"
---
# <a name="microsoft-specific-modifiers"></a>Modificatori specifici Microsoft

In questa sezione vengono descritte le estensioni di C++ specifiche di Microsoft nelle aree seguenti:

- [Indirizzamento basato su](based-addressing.md), la pratica dell'utilizzo di un puntatore come base da cui è possibile spostare altri puntatori

- [Convenzioni di chiamata della funzione](calling-conventions.md)

- Attributi estesi della classe di archiviazione dichiarati con la parola chiave [__declspec](declspec.md)

- Parola chiave [__w64](w64.md)

## <a name="microsoft-specific-keywords"></a>parole chiave specifiche di Microsoft

Molte delle parole chiave specifiche di Microsoft possono essere utilizzate per modificare i dichiaratori per formare i tipi derivati. Per ulteriori informazioni sui dichiaratori, vedere [dichiaratori](./declarations-and-definitions-cpp.md).

|Parola chiave|Significato|Utilizzata per formare tipi derivati?|
|-------------|-------------|---------------------------------|
|[__based](based-grammar.md)|Il nome che segue dichiara un offset a 32 bit rispetto alla base a 32 bit contenuta nella dichiarazione.|Sì|
|[__cdecl](cdecl.md)|Il nome che segue utilizza le convenzioni di denominazione e di chiamata del linguaggio C.|Sì|
|[__declspec](declspec.md)|Il nome che segue specifica un attributo della classe di archiviazione specifico di Microsoft.|No|
|[__fastcall](fastcall.md)|Il nome che segue dichiara una funzione che utilizza i registri, se disponibili, anziché lo stack per il passaggio di un argomento.|Sì|
|[__restrict](extension-restrict.md)|Simile a __declspec ([Restrict](restrict.md)), ma da utilizzare con le variabili.|No|
|[__stdcall](stdcall.md)|Il nome che segue specifica una funzione che osserva la convenzione di chiamata standard.|Sì|
|[__w64](w64.md)|Contrassegna un tipo di dati come maggiore in un compilatore a 64 bit.|No|
|[__unaligned](unaligned.md)|Specifica che un puntatore a un tipo o ad altri dati non è allineato.|No|
|[__vectorcall](vectorcall.md)|Il nome che segue dichiara una funzione che utilizza i registri, inclusi i registri SSE, se disponibili, anziché lo stack per il passaggio di un argomento.|Sì|

## <a name="see-also"></a>Vedi anche

[Riferimenti per il linguaggio C++](cpp-language-reference.md)
