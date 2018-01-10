---
title: sezione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- section_CPP
- vc-pragma.section
dev_langs: C++
helpviewer_keywords:
- pragmas, section
- section pragma
ms.assetid: c67215e9-2c4a-4b0f-b691-2414d2e2d96f
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fc6035caeb3b2fe466d18ea92300b3135a6189f0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="section"></a>section
Crea una sezione in un file obj.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma section( "section-name" [, attributes] )  
```  
  
## <a name="remarks"></a>Note  
 Il significato dei termini *segmento* e *sezione* sono intercambiabili in questo argomento.  
  
 Una sezione, una volta definita, rimarrà valida per il resto della compilazione. Tuttavia, è necessario utilizzare [__declspec(allocate)](../cpp/allocate.md) o non verrà inserito nella sezione.  
  
 *nome di sezione* è un parametro obbligatorio che sarà il nome della sezione. Il nome non deve essere in conflitto con alcun nome di sezione standard. Vedere [/sezione](../build/reference/section-specify-section-attributes.md) per un elenco di nomi di non utilizzare durante la creazione di una sezione.  
  
 `attributes` è un parametro facoltativo che è costituito da uno o più attributi delimitati da virgole che si desidera assegnare alla sezione. `attributes` possibili sono:  
  
 **read**  
 Consente operazioni di lettura sui dati.  
  
 **write**  
 Consente operazioni di scrittura sui dati.  
  
 **eseguire**  
 Consente l'esecuzione di codice.  
  
 **condiviso**  
 Condivide la sezione tra tutti i processi che caricano l'immagine.  
  
 **nopage**  
 Contrassegna la sezione come non paginabile; utile per i driver di dispositivo Win32.  
  
 **NoCache**  
 Contrassegna la sezione come non memorizzabile nella cache; utile per i driver di dispositivo Win32.  
  
 **Ignora**  
 Contrassegna la sezione come annullabile; utile per i driver di dispositivo Win32.  
  
 **remove**  
 Contrassegna la sezione come non residente in memoria; driver di dispositivo virtuali (V*x*D) solo.  
  
 Se non si specificano attributi, la sezione avrà attributi di lettura e scrittura.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente, la prima istruzione identifica la sezione e i relativi attributi. L'Integer `j` non viene inserito in `mysec` poiché non è stato dichiarato con `__declspec(allocate)`; `j` viene immesso nella sezione di dati. L'Integer `i` viene immesso in `mysec` come risultato del relativo attributo della classe di archiviazione `__declspec(allocate)`.  
  
```  
// pragma_section.cpp  
#pragma section("mysec",read,write)  
int j = 0;  
  
__declspec(allocate("mysec"))  
int i = 0;  
  
int main(){}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)