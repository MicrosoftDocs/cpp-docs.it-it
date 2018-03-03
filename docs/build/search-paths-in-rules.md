---
title: Percorsi di ricerca nelle regole | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- search paths in NMAKE inference rules
- inference rules in NMAKE
- rules, inference
ms.assetid: 38feded6-536d-425d-bf40-fff3173a5506
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3d62ab17831afec4cc1f8e424766925529dd8e1f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="search-paths-in-rules"></a>Percorsi di ricerca nelle regole
```  
{frompath}.fromext{topath}.toext:  
   commands  
```  
  
## <a name="remarks"></a>Note  
 Una regola di inferenza si applica a una dipendenza solo se i percorsi specificati nella dipendenza esattamente corrispondono i percorsi di regole di inferenza. Specificare la directory del dipendente in *frompath* e della destinazione in *topath*; non sono consentiti spazi. Specificare solo un percorso per ciascuna estensione. Un percorso per un'estensione richiede un percorso in altro. Per specificare la directory corrente, utilizzare un punto (.) o parentesi graffe vuote ({}). Le macro possono rappresentare *frompath* e *topath*; richiamati durante la pre-elaborazione.  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
```  
{dbi\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUDBI) $<  
  
{ilstore\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
  
{misc\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{misc\}.c{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
  
{msf\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
  
{bsc\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{mre\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{namesrvr\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{src\cvr\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Definizione di una regola](../build/defining-a-rule.md)