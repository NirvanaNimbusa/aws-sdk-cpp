﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>The tax documents required in AWS Regions in India.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/INDTaxDocuments">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API INDTaxDocuments
  {
  public:
    INDTaxDocuments();
    INDTaxDocuments(Aws::Utils::Json::JsonView jsonValue);
    INDTaxDocuments& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Goods and Services Tax (GST) documents required in AWS Regions in
     * India.</p>
     */
    inline const Aws::String& GetGSTIN() const{ return m_gSTIN; }

    /**
     * <p>The Goods and Services Tax (GST) documents required in AWS Regions in
     * India.</p>
     */
    inline bool GSTINHasBeenSet() const { return m_gSTINHasBeenSet; }

    /**
     * <p>The Goods and Services Tax (GST) documents required in AWS Regions in
     * India.</p>
     */
    inline void SetGSTIN(const Aws::String& value) { m_gSTINHasBeenSet = true; m_gSTIN = value; }

    /**
     * <p>The Goods and Services Tax (GST) documents required in AWS Regions in
     * India.</p>
     */
    inline void SetGSTIN(Aws::String&& value) { m_gSTINHasBeenSet = true; m_gSTIN = std::move(value); }

    /**
     * <p>The Goods and Services Tax (GST) documents required in AWS Regions in
     * India.</p>
     */
    inline void SetGSTIN(const char* value) { m_gSTINHasBeenSet = true; m_gSTIN.assign(value); }

    /**
     * <p>The Goods and Services Tax (GST) documents required in AWS Regions in
     * India.</p>
     */
    inline INDTaxDocuments& WithGSTIN(const Aws::String& value) { SetGSTIN(value); return *this;}

    /**
     * <p>The Goods and Services Tax (GST) documents required in AWS Regions in
     * India.</p>
     */
    inline INDTaxDocuments& WithGSTIN(Aws::String&& value) { SetGSTIN(std::move(value)); return *this;}

    /**
     * <p>The Goods and Services Tax (GST) documents required in AWS Regions in
     * India.</p>
     */
    inline INDTaxDocuments& WithGSTIN(const char* value) { SetGSTIN(value); return *this;}

  private:

    Aws::String m_gSTIN;
    bool m_gSTINHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
