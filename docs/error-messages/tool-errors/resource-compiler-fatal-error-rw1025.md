---
description: 'Altre informazioni su: errore irreversibile del compilatore di risorse risorse RW1025'
title: Errore irreversibile del compilatore di risorse RW1025
ms.date: 11/04/2016
f1_keywords:
- RW1025
helpviewer_keywords:
- RW1025
ms.assetid: 561a02af-e7e0-442a-8ad3-a00b2ca1b62e
ms.openlocfilehash: 40404f8d6dc16b73f93255a18ce8c632cc1e014a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97237192"
---
# <a name="resource-compiler-fatal-error-rw1025"></a>Errore irreversibile del compilatore di risorse RW1025

Memoria heap esaurita

Verificare la presenza di software residente in memoria che potrebbe occupare molto spazio. Utilizzare il programma CHKDSK per individuare la quantità di memoria consentita.

Se si crea un file di risorse di grandi dimensioni, suddividere lo script di risorse in due file. Dopo aver creato due file res, usare la riga di comando MS-DOS per unirli:

```
copy first.res /b + second.res /b full.res
```
