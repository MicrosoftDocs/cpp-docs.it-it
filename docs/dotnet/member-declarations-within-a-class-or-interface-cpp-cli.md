---
title: Dichiarazioni di membri in una classe o interfaccia (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- members, declaration syntax
- class members, declaration syntax
ms.assetid: 95d312a4-198b-46f0-b8f5-15253807c55e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 80b872b4c614677c05b0d28b821d3a48255905c5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46430637"
---
# <a name="member-declarations-within-a-class-or-interface-ccli"></a>Dichiarazioni di membri in una classe o interfaccia (C++/CLI)

La dichiarazione di proprietà e operatori è stata ampiamente rielaborata dalle estensioni gestite per C++ a Visual C++, nascondere i dettagli di implementazione sottostante che sono stati esposti nella progettazione delle estensioni gestite. Le dichiarazioni di eventi sono state modificate anche.

Sotto la categoria delle modifiche che hanno nessun supporto delle estensioni gestite, i costruttori statici possono ora essere definite out-of-line (che dovevano essere definite inline all'interno delle estensioni gestite) e la nozione di un costruttore delegante è stata introdotta.

## <a name="in-this-section"></a>In questa sezione

[Dichiarazione di proprietà](../dotnet/property-declaration.md)<br/>
Vengono illustrate le modifiche alle dichiarazioni di proprietà.

[Dichiarazione degli indici di proprietà](../dotnet/property-index-declaration.md)<br/>
Vengono illustrate le modifiche alle dichiarazioni di proprietà indicizzate.

[Delegati ed eventi](../dotnet/delegates-and-events.md)<br/>
Vengono illustrate le modifiche alla sintassi per la dichiarazione di delegati ed eventi.

[Uso di una funzione virtuale sealed](../dotnet/sealing-a-virtual-function.md)<br/>
Vengono illustrate le modifiche alla sintassi per l'utilizzo di una funzione sealed.

[Operatori di overload](../dotnet/overloaded-operators.md)<br/>
Vengono illustrate le modifiche all'overload degli operatori.

[Modifiche agli operatori di conversione](../dotnet/changes-to-conversion-operators.md)<br/>
Vengono illustrate le modifiche agli operatori di conversione.

[Override esplicito di un membro di interfaccia](../dotnet/explicit-override-of-an-interface-member.md)<br/>
Vengono illustrate le modifiche al metodo di override in modo esplicito un membro di interfaccia.

[Funzioni virtuali private](../dotnet/private-virtual-functions.md)<br/>
Vengono illustrate le modifiche in modalità di gestione delle funzioni virtuali private in classi derivate.

[L'attributo di collegamento dei membri integrali di Static Const non è più Literal](../dotnet/static-const-int-linkage-is-no-longer-literal.md)<br/>
Vengono illustrate le modifiche in modo `static const` collegamento dei membri integrali e su come dichiarare in modo esplicito una costante usando il nuovo `literal` (parola chiave).

## <a name="see-also"></a>Vedere anche

[Nozioni di base della migrazione in C++/CLI](../dotnet/cpp-cli-migration-primer.md)