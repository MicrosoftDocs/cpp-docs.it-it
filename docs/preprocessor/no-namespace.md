---
description: 'Altre informazioni su: no_namespace attributo Import'
title: no_namespace attributo Import
ms.date: 08/29/2019
f1_keywords:
- no_namespace
helpviewer_keywords:
- no_namespace attribute
ms.assetid: 5d81b741-a558-451b-b493-1f3b18967337
ms.openlocfilehash: e1503015f455af65a138e4e3e6843fd0516d2773
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333308"
---
# <a name="no_namespace-import-attribute"></a>no_namespace attributo Import

**Sezione specifica C++**

Specifica che il compilatore non genera un nome di spazio dei nomi.

## <a name="syntax"></a>Sintassi

> **#import** **no_namespace** della *libreria di tipi*

## <a name="remarks"></a>Commenti

Il contenuto della libreria di tipi nel file di intestazione `#import` è in genere definito in uno spazio dei nomi. Il nome dello spazio dei nomi viene specificato nell' `library` istruzione del file IDL originale. Se viene specificato l'attributo **no_namespace** , questo spazio dei nomi non viene generato dal compilatore.

Se si vuole usare un nome di spazio dei nomi diverso, usare invece l'attributo [rename_namespace](../preprocessor/rename-namespace.md) .

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
