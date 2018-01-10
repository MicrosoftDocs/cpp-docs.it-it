---
title: Uso di CString | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
helpviewer_keywords:
- CString objects, C++ string manipulation
- CString objects, reference counting
- CString class (Visual C++)
ms.assetid: ed018aaf-8b10-46f9-828c-f9c092dc7609
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3844e10dc12207513e074e76e822e4999fadec7f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-cstring"></a>Uso di CString
Gli argomenti di questa sezione descrivono come programmare con `CString`. Per la documentazione di riferimento sul `CString` classe, vedere la documentazione relativa a [CStringT](../atl-mfc-shared/reference/cstringt-class.md).  
  
 Per usare `CString`, includere l'intestazione `atlstr.h`.  
  
 Il `CString`, `CStringA`, e `CStringW` classi sono specializzazioni del modello di classe denominato [CStringT](../atl-mfc-shared/reference/cstringt-class.md) in base al tipo di dati di tipo carattere supportano.  
  
 Un oggetto `CStringW` contiene il tipo `wchar_t` e supporta le stringhe Unicode. Un oggetto `CStringA` contiene il tipo `char` e supporta le stringhe a byte singolo e multibyte (MBCS). Un oggetto `CString` supporta il tipo `char` o `wchar_t`, a seconda del fatto che in fase di compilazione venga definito il simbolo `MBCS` o `UNICODE`.  
  
 Un oggetto `CString` mantiene i dati di tipo carattere in un oggetto `CStringData`. `CString` accetta stringhe in formato C con terminazione `null`, ma non conserva il carattere `null` nei dati di tipo carattere archiviati. `CString` tiene invece traccia della lunghezza della stringa. `CString` fornisce un terminatore null quando esporta una stringa in formato C. È possibile inserire un valore `null` in un oggetto `CString`, ma potrebbe provocare risultati imprevisti.  
  
 Il set di classi stringa seguente può essere usato senza collegare una libreria MFC, con o senza il supporto della libreria run-time C: `CAtlString`, `CAtlStringA` e `CAtlStringW`.  
  
 `CString` viene usato nei progetti nativi. Per i progetti in codice gestito (C++/CLI), usare `System::String`.  
  
 Per aggiungere funzionalità rispetto a quelle offerte da `CString`, `CStringA` o `CStringW`, creare una sottoclasse di `CStringT` contenente le funzionalità aggiuntive.  
  
 Il codice seguente illustra come creare un oggetto `CString` e stamparlo in un output standard:  
  
```cpp  
#include <atlstr.h>  
  
int main() {  
    CString aCString = CString(_T("A string"));  
    _tprintf(_T("%s"), (LPCTSTR) aCString);  
}  
```  
  
## <a name="in-this-section"></a>In questa sezione  
 [Operazioni di base con CString](../atl-mfc-shared/basic-cstring-operations.md)  
 Descrive le operazioni di base di `CString`, inclusa la creazione di oggetti da stringhe letterali C, l'accesso ai caratteri in un oggetto `CString`, la concatenazione di due oggetti e il confronto di oggetti `CString`.  
  
 [Gestione dei dati di tipo stringa](../atl-mfc-shared/string-data-management.md)  
 Descrive l'uso di Unicode e MBCS con `CString`.  
  
 [Semantica di CString](../atl-mfc-shared/cstring-semantics.md)  
 Spiega come usare gli oggetti `CString`.  
  
 [Operazioni di CString relative alle stringhe in formato C](../atl-mfc-shared/cstring-operations-relating-to-c-style-strings.md)  
 Descrive la modifica del contenuto di un oggetto `CString` come una stringa in formato C con terminazione null.  
  
 [Allocazione e rilascio di memoria per un oggetto BSTR](../atl-mfc-shared/allocating-and-releasing-memory-for-a-bstr.md)  
 Descrive l'uso della memoria per un oggetto `BSTR` e per gli oggetti COM.  
  
 [Pulizia delle eccezioni di CString](../atl-mfc-shared/cstring-exception-cleanup.md)  
 Spiega che la pulizia esplicita in MFC 3.0 e versione successiva non è più necessaria.  
  
 [Passaggio degli argomenti di CString](../atl-mfc-shared/cstring-argument-passing.md)  
 Spiega come passare gli oggetti CString alle funzioni e come restituire oggetti `CString` da funzioni.  
  
 [Supporto per set di caratteri Unicode e multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md)  
 Descrive il supporto di Unicode e MBCS in MFC.  
  
## <a name="reference"></a>Riferimenti  
 [CStringT](../atl-mfc-shared/reference/cstringt-class.md)  
 Fornisce informazioni di riferimento sulla classe `CStringT`.  
  
 [Classe CSimpleStringT](../atl-mfc-shared/reference/csimplestringt-class.md)  
 Fornisce informazioni di riferimento sulla classe `CSimpleStringT`.  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)  
 Contiene collegamenti ad argomenti che descrivono diversi modi per gestire i dati di tipo stringa.  
  
 [Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)

